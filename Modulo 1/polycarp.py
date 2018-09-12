
n_coins = int(input())

coins = []
size = 0
seen = []

for i in range (0, 100): 
	seen.append(0)

for i in range (0, n_coins):
	coins.append(int(input()))
	if (seen[coins[i]]) != 0:
		print(seen[coins[i]])
		seen[coins[i]] = seen[coins[i]] + 1

for i in range (0, 100):
	if(seen[i] > 1):
		size+=1

print (size)