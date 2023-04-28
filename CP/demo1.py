import pandas as pd
import smtplib
from email.mime.text import MIMEText
import socket
import time

# Load the data from the XLSX file
data = pd.read_excel('Book1.xlsx', usecols=[0], header=None, names=["mail"])

if "mail" in data.columns:
    email_col = data["mail"]
else:
    raise ValueError("The 'mail' column does not exist in the dataframe")

def send_email(to, body):
    sender = "........." # Change this to your email address
    password = "........." # Change this to your email password

    message = MIMEText(body)
    message["Subject"] = "Unique symphony of art, entertainment, music, movies, citizen science to raise awareness about epilepsy."
    message["From"] = sender
    message["To"] = to

    try:
        server = smtplib.SMTP("smtp.gmail.com", 587) # Change this to your email server and port
        server.starttls()
        server.login(sender, password)
        server.send_message(message)
        server.quit()
        return True
    except smtplib.SMTPException as e:
        print(f"Error: Unable to send email to {to}")
        print(e)
        return False
    except socket.gaierror as e:
        print(f"Error: Could not connect to email server for {to}")
        print(e)
        return False
    except socket.error as e:
        print(f"Error: Could not send email to {to}")
        print(e)
        return False

with open("bodyofmail.txt", "r", encoding='utf-8') as file:
    body = file.read()

total_emails = len(email_col)
start = int(input("Enter the column number to start from: "))
start = start - 1

if start >= total_emails:
    print("Error: Starting column number is out of range")
else:
    successful_emails = []
    failed_emails = []
    count = 1
    for email in email_col[start:]:
        result = send_email(email, body)
        if result:
            successful_emails.append(email)
        else:
            failed_emails.append(email)
        print(f"Sent email to {email} ({count}/{total_emails})")
        count += 1

    print(f"All emails sent successfully! {len(successful_emails)}/{total_emails}")
    if failed_emails:
        print(f"Emails that failed to send: {failed_emails}")
