# 🎮 CLI-XO: Terminal Tic-Tac-Toe

**A minimalist Tic-Tac-Toe implementation in pure C for the terminal**

## 🚀 Features
- 2-Player hotseat mode
- Input validation
- Instant win detection
- Auto-restart functionality

## ⚙️ Installation
```bash
git clone https://github.com/yourusername/CLI-XO.git
cd CLI-XO
gcc cli-xo.c -o cli-xo
./cli-xo
```
## 🕹️ Controls  
**Player 1:** X symbol  
**Player 2:** O symbol  
**Input:** Numbers 1-9 (numpad layout)  
**Restart:** 'y' after game ends  
**Quit:** 'n' after game ends  

## 📜 Rules  
- Players take alternating turns  
- Valid inputs: 1-9  
- Win with 3 matching symbols in a row  
- Draw when board is full  

## 🏆 Win Conditions  
- Horizontal lines (rows 1-3)  
- Vertical lines (columns 1-3)  
- Both diagonals  

## 🔧 Technical Details  
**Language:** C Standard  
**Dependencies:** Standard libraries  
**Compatibility:** Windows/macOS/Linux  
**Files:**  
- `cli-xo.c` (main program)  
- `Makefile` (optional)  
