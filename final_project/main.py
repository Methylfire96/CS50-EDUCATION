import pygame, sys
from editor import Editor
WINDOW_WIDTH = 1200
WINDOW_HEIGHT = 800

class Main:
    def __init__(self):
        pygame.init()
        self.display_surface = pygame.display.set_mode((WINDOW_WIDTH, WINDOW_HEIGHT))
        self.clock = pygame.time.Clock()

        self.editor = Editor()

    def run(self):
        while True:
            dt = self.clock.tick()
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    sys.exit()

            self.editor.run(dt)

            pygame.display.update()

if __name__ == "__main__":
    main = Main()
    main.run()


