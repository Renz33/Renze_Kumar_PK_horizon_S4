# 🚀 Horizon Rover Tasks

## 📌 Description

This repository contains tasks related to **ROS2 and robotics development**, including C++ programs and ROS2 communication using publisher–subscriber (talker & listener) nodes.

---

## 📂 Project Structure

```
horizon_rover_tasks/
│
├── level1/        # C++ programs
├── level2/        # Basic demo video
├── level3/        # ROS2 package (talker & listener)
│   └── src/
│       └── my_task_package/
```

---

## ⚙️ Technologies Used

* ROS2 (Humble)
* Python
* C++
* Ubuntu (VMware)

---

## ▶️ How to Run (ROS2 Package)

```bash
cd level3
colcon build
source install/setup.bash

# Run talker node
ros2 run my_task_package talker

# Run listener node
ros2 run my_task_package listener
```

---

## 🔄 How It Works

* **Talker Node** → Publishes messages continuously
* **Listener Node** → Subscribes and prints received messages
* Demonstrates ROS2 **publisher–subscriber communication**

---

## 🎥 Demo Videos

* 📁 `level2/` → Basic task demo
* 📁 `level3/` → Talker–Listener execution demo

---

## ✅ Output

* Messages published by talker node
* Messages successfully received by listener node
* Verified ROS2 communication pipeline

---

## 🧠 Key Concepts Used

* ROS2 Nodes
* Publisher & Subscriber
* Topics
* Python-based ROS2 package
* Colcon build system

---

## 👤 Author

**Renze Kumar PK**

