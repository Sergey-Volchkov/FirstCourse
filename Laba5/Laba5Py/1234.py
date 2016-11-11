st = 'qwewqeqwe555rrrr5qeqe'
st.split('555') #делит строку на две части, 555 вырезается
print(st)

st = '213.04567890'
print(st)
t = st.find('.0')
print(t)
print(len('.0'))
st = st[t+len('.0'):]
print(st)