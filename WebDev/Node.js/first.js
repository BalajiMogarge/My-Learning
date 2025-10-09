const fs = require("fs");
const filePath = "./tasks.json";

const loadTask = () => {
  try {
    const dataBuffor = fs.readFileSync(filePath);
    const dataJSON = dataBuffor.toString();
    return JSON.parse(dataJSON);
  } catch (error) {
    return [];
  }
};
const saveTask = (tasks) => {
  const dataJSON = JSON.stringify(tasks);
  fs.writeFileSync(filePath, dataJSON);
};
const addTask = (task) => {
  const tasks = loadTask();
  tasks.push({ task });
  saveTask(tasks);
  console.log("Tasks added to list ", task);
};
const listTask = () => {
  const tasks = loadTask();
  tasks.forEach((task, index) => {
    console.log(`${index + 1} : ${task}`);
  });
};
const removeTask = (index) => {
  const tasks = loadTask();
  if (index < 0 || index > tasks.length) {
    console.log("Invalide index");
    return;
  }
  const removed = tasks.splice(index - 1, 1);
  saveTask(tasks);
  console.log(`The task at ${index} is being removed`);
};

const command = process.argv[2];
const argument = process.argv[3];

if (command === "add") {
  addTask(argument);
} else if (command == "list") {
  listTask(argument);
} else if (command === "remove") {
  removeTask(parseInt(argument));
} else {
  console.log("Command not found!");
}
