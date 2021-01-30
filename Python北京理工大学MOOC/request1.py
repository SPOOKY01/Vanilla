import requests
r = requests.get('http://api.github.com/user', auth = ('user' , 'pass'))
r.status_code
r.headers['content-type']
r.encoding
r.text
