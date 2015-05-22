while 1:
	n = int(input())
	if not n:
		break
	else:
		stations = []
		for i in range(n):
			stations.append(int(input()))
		stations.sort()

		trip = True
		length_stations = len(stations)
		for i in range(length_stations):
			if i != length_stations - 1:
				if stations[i + 1] - stations[i] > 200:
					trip = False
					break
			else:
				if 1422 - stations[i] > 100:
					trip = False
					break
		
		print("POSSIBLE" if trip else "IMPOSSIBLE")
