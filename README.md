# 📚 图书管理系统 📚

> SJTU ACM班 2021级 程序设计课程大作业

[![GitHub top language](https://img.shields.io/github/languages/top/ACM-Programming-2021/Bookstore-2021)](https://www.cplusplus.com/)
[![GitHub](https://img.shields.io/github/license/ACM-Programming-2021/Bookstore-2021)](https://www.gnu.org/licenses/gpl-3.0.html)
[![GitHub repo size](https://img.shields.io/github/repo-size/ACM-Programming-2021/Bookstore-2021)](https://github.com/ACM-Programming-2021/Bookstore-2021/archive/refs/heads/main.zip)

[![Latest tag](https://img.shields.io/github/v/tag/ACM-Programming-2021/Bookstore-2021)](https://github.com/ACM-Programming-2021/Bookstore-2021/tags)
[![Last commit](https://img.shields.io/github/last-commit/ACM-Programming-2021/Bookstore-2021)](https://github.com/ACM-Programming-2021/Bookstore-2021/commits/)



## 📖 目录

* [🎈 简介](#-简介)
* [📝 作业说明](#-作业说明)
  * [🛎 评测方式](#-评测方式)
  * [🛎 分数组成](#-分数组成)
  * [⏱ 中期检查](#-中期检查)
  * [⏱ 检查时间表](#-检查时间表)
* [🚀 项目说明](#-项目说明)
  * [👨‍💻 开发要求](#-开发要求)
    * [开发文档](#开发文档)
    * [Github 仓库管理](#github-仓库管理)
    * [代码风格](#代码风格)
  * [😈 业务需求](#-业务需求)
    * [交互方式](#交互方式)
    * [用户系统](#用户系统)
    * [图书系统](#图书系统)
    * [性能需求](#性能需求)
  * [💎 Bonus](#-bonus)







## 🎈 简介

- 实现一个用 C++ 语言编写的图书管理系统，用于向店家和顾客提供图书基本信息检索与购买相关服务
- 本项目目标如下
  - 培养学生工程开发的能力（开发文档的编写与程序的封装等）
  - 培养学生的代码管理能力（Github 的使用），拥有良好的代码规范意识
  - 提升学生的编程学习与实践能力（块状链表的学习实现）
  - 培养学生对编写软件的兴趣（见 [Bonus](#bonus)）
- 关于本仓库
  - 本仓库为模板仓库，你可以点击上方绿色的 `Use this template` 按钮复制一份属于你的仓库用于完成作业。你应该自定义 `README.md` 内容（其中如 ![GitHub top language](https://img.shields.io/github/languages/top/ACM-Programming-2021/Bookstore-2021) 这样的 Shield，将链接中的 `/:user/:repo` 改成你的信息即可，详见 [Shields.IO](https://shields.io/)）
  - 助教提供的块状链表 DLL 及使用方式见仓库中 `bin` 和 `src` 文件夹中现成的示例代码
  - 关于本仓库有任何问题欢迎联系助教











## 📝 作业说明

### 🛎 评测方式

- 公开的评测数据见本仓库根目录下 `Data.rar`
  - 注意：每个 `testcase` 为最小评测数据单元。即测试同一 `testcase` 的多个输入文件过程中，对于每个输入文件，都会以其为输入运行你的程序，完成后关闭程序，再以下一个输入文件运行你的程序，但过程中不会清除你的程序运行生成的数据文件。而每个 `testcase` 测试结束后会清除所有你的程序生成的文件，再运行下一个 `testcase`。
- Online Judge 提交方式为提交 `Git` 格式的代码，内容为形如 `https://github.com/username/repo.git` 的链接
  - 注意：由于网络原因可能会导致评测机 Clone 仓库失败。仓库内容过大（如将解压后的数据文件或 Build 内容一并放入仓库）导致的问题后果自负。
  - 提示：可以使用 Github 仓库加速通道链接提交作业，例如 Chrome 插件 [GitHub加速](https://chrome.google.com/webstore/detail/github%E5%8A%A0%E9%80%9F/mfnkflidjnladnkldfonnaicljppahpg)



### 🛎 分数组成

> 本作业总分 100%，最终将以本作业占本课程成绩总分分数折算入课程成绩

| 得分项      | 分值 | 说明                           |
| ----------- | ---- | ------------------------------ |
| 正确性      | 55%  | 通过所有基础数据点             |
| 鲁棒性      | 10%  | 通过所有里数据点               |
| 开发文档    | 10%  | 助教评分 `3%` + 小组评分 `7%`  |
| Code Reivew | 15%  | 代码规范等                     |
| Bonus       | 10%  | 具体各项得分见 [Bonus](#Bonus) |



### ⏱ 中期检查

- 助教将在固定时间节点检查学生的完成进度，具体时间详见 [检查时间表](#检查时间表)
  - 请填写问卷：[Repo 地址收集](https://www.wjx.top/vj/t6qa8FZ.aspx)
- **中期检查将以仓库的 Tag 为准**，助教将检查最新 Tag 对应的 Commit 的内容是否符合该阶段要求
- 如遇困难请**提前**联系助教



### ⏱ 检查时间表

- **Week 0** *（对应校历 2021-2022 学年第一学期第 12 周）*
  - 周一 `11.29`：发布项目
- **Week 1**
  - 周一 `12.6`：提交、检查、交换开发文档
- **Week 2**
  - 周一 `12.13`：检查文件存储数据结构（块状链表）进度
  - 周五 `12.17`：**通过**文件存储数据结构正确性测试
- **Week 3**
  - 周三 `12.22`：检查主体逻辑部分进度
- **Week 4** *（对应校历第 16 周）*
  - 周一 `12.27`：检查主题逻辑部分正确性测试
    - 通过测试者进行 Code Review
  - 周五 `12.31`：**通过**主题逻辑部分正确性测试
    - 其余学生进行 Code Review
    - Bonus 成果展示

- **友情提醒：期末考试总是要好好备考的，所以请务必不要留给第 16 周的自己太多工作量**











## 🚀 项目说明

### 👨‍💻 开发要求

#### 开发文档

- 每位学生均需完成一份开发文档。// todo 开发文档要求
- // todo 开发文档样例



#### Github 仓库管理

- 了解版本库、工作区、暂存区等 Git 基础概念
- 掌握 `commit` 等常用指令（可参考 Walotta 助教于 2021.11.1 晚的上机课授课内容）
- Github 仓库整体文件结构清晰，合理设置 `README.md`, `.gitignore`, `LICENSE`, `.github/`
- 合理使用 Commit 和 Tag 功能维护代码版本
  - Commit Message 内容可以清晰简要但不能缺失
  - Tag 命名合理，可参考 [Wikipedia: Software versioning](https://en.wikipedia.org/wiki/Software_versioning)

- 额外要求
  - 学习 Branch 的使用
  - 使用 Github Action 进行 Lint 检查



#### 代码风格

- 选择合适的代码风格，并在仓库说明文档中说明
- 严格遵守选定风格的代码规范







### 😈 业务需求

#### 交互方式

- CLI stdin stdout
- 文件存储
- Invalid

#### 用户系统

#### 图书系统

#### 其他功能

- 初始化
- report

#### 性能需求

- 不能都放内存
- 不能 FADB



### 💎 Bonus

> `[k]` 为该任务满分。Bonus 部分总满分 10 分，得分溢出则以 10 分计。
>
> 除 Task 14 外，所有任务均无正确性测试，由学生展示后助教主观评分。
>
> Task 4~11 若展示成果极为优秀，可视情况给分溢出该任务满分，但 Bonus 部分总分一定不会超过 10 分。

- **Task 1.**  `[1]`  美观的 Report

  - 以你的审美实现 `report` 指令输出一份美观的报告

- **Task 2.**  `[1]`  数字选择的 CLI 界面

  - 即各种脚本提供的界面。如下例

    ```markdown
    欢迎光临，PaperL。您需要哪种服务？：
    1. 买书
    2. 卖二手书
    3. 砸书店
    > 2
    ```
    
    ```markdown
    请输入"<书名> <数量>"：
    > 《他改变了中国》 19260817
    ```
    
    ```markdown
    交易失败😥本店不收该书
    按任意键返回菜单
    > 
    ```

  - 请在 CLI 界面中使用**不同颜色的文本**帮助用户更好地阅读界面

- **Task 3.**  `[1]`  支持中文 & emoji 显示

  - 输入数据应支持中文
  - 输出数据应支持中文和 emoji（即可在界面中使用 emoji）

- **加密存储**

  - 尝试在数据被窃取后保证数据安全，在以下方案中**择一**实现（同时完成 Task 4, 5 仅得 `3` 分）
    - **Task 4.**  `[2]`  支持设置密保问题
    - **Task 5.**  `[3]`  通过本地机器特征码加密文件中的数据

- **Task 6.**  `[3]`  使用 Github Action 自动进行 Lint 检查

- **数据备份**
  - 支持自动**定时**备份数据，并可一键将数据恢复至指定备份版本，在以下方案中**择一**实现
    - **Task 7.**  `[2]`  完全备份
    - **Task 8.**  `[4]`  差异备份
    - **Task 9.**  `[6]`  增量备份
- **Task 10.**  `[8]`  语法高亮
- **Task 11.**  `[8]`  Tab 补全
- **Task 12.**  `[10]`  高并发块链
    - 支持对于特殊数据的多线程读取
    - 该数据仅有读取操作，允许程序离线读入所有指令后，并发进行文件读取行为
- **Task 13.**  `[10]`  GUI 前端
- 实现网页或 Python 等 GUI 界面
- **Task 14.**  `[10]`  B+ 树
  - 以 B+ 树而非块状链表实现本作业文件存储功能
  - **该功能需要通过 Online Judge 评测**







