import requests
from bs4 import BeautifulSoup

research_later = input("enter song name: ")
tag=" site:youtube.com"
goog_search = "https://google.com/search?q=" + research_later + tag


r = requests.get(goog_search)

soup = BeautifulSoup(r.text, "html.parser")
info=soup.select('.tAd8D')
result=""
for i in info:
    result=i.getText()
    break
print(f"https://youtu.be/"+result[-11:])
whi
