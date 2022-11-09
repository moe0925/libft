import pyxel

pyxel.init(200,200)

ballx = [pyxel.rndi(0,199)]
bally = [0, 0, 0]
# angle = pyxel.rndi(30, 150)
vx = [pyxel.cos(pyxel.rndi(30, 150)), pyxel.cos(pyxel.rndi(30, 150)), pyxel.cos(pyxel.rndi(30, 150))]
vy = [pyxel.sin(pyxel.rndi(30, 150)), pyxel.sin(pyxel.rndi(30, 150)), pyxel.sin(pyxel.rndi(30, 150))]
padx = 100
speed = 2
score = 0
pyxel.sound(0).set(notes='c2d2e2f2g2a2b2c3', tones='TT', volumes='33', effects='NN', speed=10)
pyxel.sound(1).set(notes='A2C3', tones='TT', volumes='33', effects='NN', speed=10)
finished = False
fail_count = 0
def update():
    global ballx, bally, vx, vy, padx, speed, score, angle, finished, fail_count
    if finished:
        return
    padx = pyxel.mouse_x
    for i in range(0, len(ballx)):
        ballx[i] += vx[i] * speed
        bally[i] += vy[i] * speed
        if ballx[i] >= 200 or ballx[i] <= 0:
            vx[i] *= -1
        if bally[i] >= 200:
            ballx[i] = pyxel.rndi(0, 199)
            bally[i] = 0
            angle = pyxel.rndi(30, 150)
            vx[i] = pyxel.cos(angle)
            vy[i] = pyxel.sin(angle)
            speed *= 1.1
            pyxel.play(0, 1)

            fail_count += 1
            if fail_count == 10:
                finished = True



  
        if bally[i] >= 195 and padx-20 <= ballx[i] <= padx+20:
            score += 1
            ballx[i] = pyxel.rndi(0, 199)
            bally[i] = 0
            angle = pyxel.rndi(30, 150)
            vx[i] = pyxel.cos(angle)
            vy[i] = pyxel.sin(angle)
            speed *= 1.1
            pyxel.play(0, 0)
            # if score%10 == 0:
            #     score_10 == 1
            if score % 10 == 0 and score / 10 > 0:
                ballx.append(pyxel.rndi(0,199))
                speed = 2

def draw():
    global ballx, bally, vx, vy, padx, finished, fail_count
    pyxel.cls(7)

    if finished:
        pyxel.text(90, 100, "GAME OVER", 0)

    for i in range(0, len(ballx)):
        pyxel.circ(ballx[i], bally[i], 10, 6)
    pyxel.rect(padx-20, 195, 40, 5, 14)
    pyxel.text(0, 0, "SCORE: " + str(score), 0)
    pyxel.text(0, 10, "FAIL: " + str(fail_count), 0)

pyxel.run(update, draw)
