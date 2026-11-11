def solution(bandage, health, attacks):
    time = 0
    p = 0
    mheal = health
    for t, d in attacks:
        while time < t - 1:
            time += 1
            p += 1
            
            health += bandage[1]

            if p % bandage[0] == 0:
                health += bandage[2]

            health = min(health, mheal)

        time += 1
        health -= d
        p = 0

        if health <= 0:
            return -1

    return health