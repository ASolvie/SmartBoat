import json
import boto3
from botocore.exceptions import NoCredentialsError

ACCESS_KEY = 'AKIA56EZPTMQFLAKPD6B'
SECRET_KEY = '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'

def upload_to_aws(local_file, bucket, s3_file):
	s3 = boto3.client('s3', aws_access_key_id=ACCESS_KEY, aws_secret_access_key=SECRET_KEY)

	try:
		s3.upload_file(local_file, bucket, s3_file)
		print("Upload Success!")
		return True
	except FileNotFoundError:
		print("File not found")
		return False
	except NoCredentialsError:
		print("Credentials not available")
		return False

uploaded = upload_to_aws('smartboat_data.JSON', 'smart-boat-tester-bucket', 'sensor_data.JSON')

