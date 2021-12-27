from googleapiclient.discovery import build
from uritemplate.api import partial
api_key= "AIzaSyAdNho7QyyinbA8i3BbeG8Yft73IXhqFMQ"
query=input("enter song name: ")
youtube= build('youtube', 'v3', developerKey=api_key)
req=youtube.search().list(q=query, part='snippet', type='video', maxResults=1)
result=req.execute()
for i in result['items']:
    print(f"https://youtu.be/"+i['id']['videoId'])
    break
