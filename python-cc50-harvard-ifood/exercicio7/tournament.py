import csv
import random
import sys

N = 1000

def main():
    if len(sys.argv) != 2:
        sys.exit("Usage: python tournament.py FILENAME")

    filename = sys.argv[1]
    teams = load_teams(filename)
    counts = simulate_tournaments(teams, N)

    for team in sorted(counts, key=lambda team: counts[team], reverse=True):
        probability = (counts[team] / N) * 100
        print(f"{team}: {probability:.1f}% chance of winning")

def load_teams(filename):
    teams = []
    with open(filename) as file:
        reader = csv.DictReader(file)
        for row in reader:
            team = row["team"]
            rating = int(row["rating"])
            teams.append({"team": team, "rating": rating})
    return teams

def simulate_tournaments(teams, n):
    counts = {}
    for i in range(n):
        winner = simulate_tournament(teams)
        if winner in counts:
            counts[winner] += 1
        else:
            counts[winner] = 1
    return counts

def simulate_tournament(teams):
    while len(teams) > 1:
        teams = simulate_round(teams)
    return teams[0]["team"]

def simulate_round(teams):
    winners = []
    for i in range(0, len(teams), 2):
        if simulate_game(teams[i], teams[i + 1]):
            winners.append(teams[i])
        else:
            winners.append(teams[i + 1])
    return winners

def simulate_game(team1, team2):
    rating1 = team1["rating"]
    rating2 = team2["rating"]
    probability = 1 / (1 + 10 ** ((rating2 - rating1) / 600))
    return random.random() < probability

if __name__ == "__main__":
    main()
