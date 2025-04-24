CREATE TABLE IF NOT EXISTS `mod_reagent_bank_account` (
    `account_id` int NOT NULL,
    `item_entry` int NOT NULL,
    `item_subclass` int NOT NULL,
    `amount` int NOT NULL,
    PRIMARY KEY (`account_id`,`item_entry`)
) ENGINE=InnoDB DEFAULT CHARSET=UTF8MB4;
