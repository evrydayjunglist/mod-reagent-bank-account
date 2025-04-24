# mod-reagent-bank-account
## AzerothCore Module

This module adds a reagent bank similar to later WoW expansions. This bank can free bag space by holding crafting reagents for players.

**NOTE:** This is the account-wide version of the module found here:  
https://github.com/ZhengPeiRu21/mod-reagent-bank

---

## Features

- One-click button to deposit all reagents
- Auto-sorting of reagents into categories
- No storage limits
- Account-wide storage (all characters on the same account share the reagent bank)
- Withdraw reagents in stack sizes or all at once
- Supports all trade goods and gems (except unique items)
- NPC banker with gossip menu for deposit/withdrawal
- Configurable via `mod_reagent_bank_account.conf`
- Safe SQL table creation and updates
- Compatible with AzerothCore's module system

---

## Installation

1. **Clone or download this module** into your `modules` directory:
    ```
    git clone https://github.com/YOUR_REPO/mod-reagent-bank-account.git
    ```

2. **Import SQL files:**
    - Import `data/sql/db-characters/base/mod_reagent_bank_account_create_table.sql` into your `characters` database.
    - Import `data/sql/db-world/base/mod_reagent_bank_account_NPC.sql` into your `world` database.

3. **Copy the config file:**
    - Copy `conf/mod_reagent_bank_account.conf.dist` to your server's config directory as `mod_reagent_bank_account.conf`.
    - Edit `mod_reagent_bank_account.conf` to enable or configure the module.

4. **Add the NPC in-game:**
    - Use the provided SQL to add the NPC banker (`Ling`, entry `290011`).
    - Spawn the NPC in your world as needed:
      ```
      .npc add 290011
      ```

5. **Rebuild your core** to include the module.

6. **Enable the module** in your `modules.conf` if required.

---

## Configuration

Example config (`mod_reagent_bank_account.conf`):

```
[worldserver]
ReagentBankAccount.Enable = 1
```

---

## Usage

- Talk to the Reagent Banker NPC (`Ling`) to deposit or withdraw reagents.
- Use the "Deposit All Reagents" button to move all reagents from your bags to the account-wide bank.
- Withdraw reagents as needed; items are sorted by category.

---

## Changelog

- Consistent naming for SQL tables, script names, and C++ classes (`mod_reagent_bank_account`)
- Safe SQL queries and null checks in code
- Improved documentation and installation instructions
- Configurable and compatible with latest AzerothCore

---

## Screenshots

![Capture](https://user-images.githubusercontent.com/98835050/157975217-0cc09b62-1043-4f6f-8dfa-7bf8541c3a4a.PNG)
![Capture2](https://user-images.githubusercontent.com/98835050/157975251-31c8a8f8-ce59-44f9-8afc-39237861dc5f.PNG)

---

## Credits

Original module by [ZhengPeiRu21](https://github.com/ZhengPeiRu21/mod-reagent-bank)  
Account-wide adaptation and improvements by community contributors.
