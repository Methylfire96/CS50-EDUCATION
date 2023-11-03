import pygame, sys, time

# name
pygame.display.set_caption("Final Project")

# window
WINDOW_WIDTH = 1200
WINDOW_HEIGHT = 800
WINDOW = pygame.display.set_mode((WINDOW_WIDTH, WINDOW_HEIGHT))

# player
PLAYER_WIDTH = 40
PLAYER_HEIGHT = 60
PLAYER_MOVE = 5
PLAYER_JUMP = 3


# draw/ show
def update(player):
    WINDOW.fill("#6185f8")
    pygame.draw.rect(WINDOW, "red", player)

    # always lost call of def update()
    pygame.display.update()

def main():
    run = True

    player = pygame.Rect(400, WINDOW_HEIGHT - PLAYER_HEIGHT, PLAYER_WIDTH, PLAYER_HEIGHT)


    while run:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                run = False
                break

        # player movement
        keys = pygame.key.get_pressed()
        if keys[pygame.K_a]:
            player.x -= PLAYER_MOVE

        if keys[pygame.K_d]:
            player.x += PLAYER_MOVE

        if keys[pygame.K_SPACE]:
            player.y -= PLAYER_JUMP


        # update the def update while run
        update(player)

    pygame.quit()




if __name__ == "__main__":
    main()



