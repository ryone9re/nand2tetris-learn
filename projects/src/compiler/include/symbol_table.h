#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

/**
 * @brief Need free!
 * Initialize symbol table.
 * @return Symbol_table* Initialized symbol table.
 */
Symbol_table *initialize_symbol_table();

/**
 * @brief
 * Free symbol table
 * @param symbol_table
 */
void free_symbol_table(Symbol_table *symbol_table);

/**
 * @brief
 * Create new symbol.
 * @return Symbol* Created symbol.
 */
Symbol *new_symbol();

/**
 * @brief
 * Free symbols.
 * @param symbols Symbol list
 */
void free_symbol(Symbol *symbols);

/**
 * @brief
 * Add new symbol to tale of symbol.
 * @param symbols
 * @param new
 * @return Symbol* Head of symbol.
 */
Symbol *add_symbol(Symbol *symbol, Symbol *new);

/**
 * @brief
 * Count kind number in symbol_table.
 * @param symbol_table
 * @param kind
 * @return int
 */
int var_count(Symbol_table *symbol_table, enum Kind kind);

/**
 * @brief
 * Return index of var_name in symbol_table.
 * @param var_name
 * @return int If not is in, return -1.
 */
int index_of(Symbol_table *symbol_table, char *var_name);

#endif /* SYMBOL_TABLE_H */
