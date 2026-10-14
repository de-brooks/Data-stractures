// Run with Node.js: node results.js
const readline = require("readline/promises");
const SIZE = 5;

async function main() {
  const rl = readline.createInterface({ input: process.stdin, output: process.stdout });
  const marks = new Array(SIZE);

  console.log("STUDENT RESULT MANAGEMENT SYSTEM");
  console.log(`Enter marks for ${SIZE} students (0-100).\n`);

  for (let i = 0; i < SIZE; i++) {
    let text = await rl.question(`Enter mark for student ${i + 1}: `);
    while (!/^\d+$/.test(text.trim()) || +text > 100) {
      text = await rl.question("Invalid input. Enter a whole number from 0 to 100: ");
    }
    marks[i] = Number(text);
  }
  rl.close();

  let total = 0, highest = marks[0], lowest = marks[0];
  for (const m of marks) {
    total += m;
    if (m > highest) highest = m;
    if (m < lowest) lowest = m;
  }
  const average = total / SIZE;

  console.log("\n--- STUDENT RESULTS ---");
  marks.forEach((m, i) => console.log(`Student ${i + 1}: ${m} - ${m >= 50 ? "Pass" : "Fail"}`));

  console.log(`\nTotal marks: ${total}`);
  console.log(`Average mark: ${average.toFixed(2)}`);
  console.log(`Highest mark: ${highest}`);
  console.log(`Lowest mark: ${lowest}`);
}
main();
