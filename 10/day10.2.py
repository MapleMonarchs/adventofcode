def printScreen(liste):
    for y in range(0, 6):
        print(y, end=': ')
        for x in range(0, 40):
            print(liste[y * 40 + x], end='')
        print('\n')
        
def moveSprite(x, old_x):
    global vram
    
    vram[old_x - 1] = 0
    vram[old_x] = 0
    vram[old_x + 1] = 0
    
    vram[x - 1] = 1
    vram[x] = 1
    vram[x + 1] = 1

##################################

screen = ['.'] * (40*6) 
vram   = [0] * (40*6)

regx = 1
pause = 0
arg = 0

cycle = 0

inhalt = open("example.txt", "r")

moveSprite(1, 1)
#printScreen(vram)

while True:
    if(cycle > 239):
        break
    
    
    if(pause == 0):
        print("cycle: ", cycle)
        print("x: ", regx)
        
        regx += arg
        arg = 0
        
        moveSprite(regx, regx - arg)
        
        line = inhalt.readline()
        print(line, end=' ')
        if line == '':
            break
        if("noop" in line):
            pass
        else:
            arg = int(line.split(' ')[1])
            pause = 1
    else:
        pause = pause - 1
        print("cycle: ", cycle)
        print("X: ", regx)
        print("pause: ", pause)
    
    if(vram[cycle] == 1):
        screen[cycle] = 'X'
    else: 
        screen[cycle] = '.'
    cycle += 1

printScreen(screen)
#printScreen(vram)