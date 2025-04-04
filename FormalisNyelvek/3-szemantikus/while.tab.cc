// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "while.tab.hh"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 136 "while.tab.cc"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->kind ())
    {
      case symbol_kind::S_T_ID: // T_ID
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expression: // expression
        value.copy< type > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  parser::symbol_kind_type
  parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_T_ID: // T_ID
        value.move< std::string > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_expression: // expression
        value.move< type > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_kind.
  parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  void
  parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  void
  parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  parser::symbol_kind_type
  parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  parser::symbol_kind_type
  parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_T_ID: // T_ID
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expression: // expression
        value.YY_MOVE_OR_COPY< type > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_T_ID: // T_ID
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expression: // expression
        value.move< type > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_T_ID: // T_ID
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_expression: // expression
        value.copy< type > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_T_ID: // T_ID
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_expression: // expression
        value.move< type > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.kind_ = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_T_ID: // T_ID
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_expression: // expression
        yylhs.value.emplace< type > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // start: T_PROGRAM T_ID declarations T_BEGIN statements T_END
#line 57 "while.y"
    {
    }
#line 681 "while.tab.cc"
    break;

  case 3: // declarations: %empty
#line 63 "while.y"
    {
    }
#line 688 "while.tab.cc"
    break;

  case 4: // declarations: declaration declarations
#line 67 "while.y"
    {
    }
#line 695 "while.tab.cc"
    break;

  case 5: // declaration: T_INTEGER T_ID T_SEMICOLON
#line 73 "while.y"
    {
		if( symbol_table.count(yystack_[1].value.as < std::string > ()) > 0 )
		{
			semantic_error(yystack_[2].location.begin.line, "Re-declared variable: " + yystack_[1].value.as < std::string > ());
		}
		symbol_table[yystack_[1].value.as < std::string > ()] = integer;
    }
#line 707 "while.tab.cc"
    break;

  case 6: // declaration: T_BOOLEAN T_ID T_SEMICOLON
#line 82 "while.y"
    {
		if( symbol_table.count(yystack_[1].value.as < std::string > ()) > 0 )
		{
			semantic_error(yystack_[2].location.begin.line, "Re-declared variable: " + yystack_[1].value.as < std::string > ());
		}
		symbol_table[yystack_[1].value.as < std::string > ()] = boolean;
    }
#line 719 "while.tab.cc"
    break;

  case 7: // statements: statement
#line 93 "while.y"
    {
    }
#line 726 "while.tab.cc"
    break;

  case 8: // statements: statement statements
#line 97 "while.y"
    {
    }
#line 733 "while.tab.cc"
    break;

  case 9: // statement: T_SKIP T_SEMICOLON
#line 103 "while.y"
    {
    }
#line 740 "while.tab.cc"
    break;

  case 10: // statement: T_ID T_ASSIGN expression T_SEMICOLON
#line 107 "while.y"
    {
		if( symbol_table.count(yystack_[3].value.as < std::string > ()) == 0 )
		{
			semantic_error(yystack_[3].location.begin.line, "Undeclared variable: " + yystack_[3].value.as < std::string > ());
		}
		if(symbol_table[yystack_[3].value.as < std::string > ()] != yystack_[1].value.as < type > ())
		{
		   semantic_error(yystack_[3].location.begin.line, "Type error.");
		}
    }
#line 755 "while.tab.cc"
    break;

  case 11: // statement: T_READ T_OPEN T_ID T_CLOSE T_SEMICOLON
#line 119 "while.y"
    {
		if( symbol_table.count(yystack_[2].value.as < std::string > ()) == 0 )
		{
			semantic_error(yystack_[4].location.begin.line, "Undeclared variable: " + yystack_[2].value.as < std::string > ());
		}
    }
#line 766 "while.tab.cc"
    break;

  case 12: // statement: T_WRITE T_OPEN expression T_CLOSE T_SEMICOLON
#line 127 "while.y"
    {
    }
#line 773 "while.tab.cc"
    break;

  case 13: // statement: T_IF expression T_THEN statements T_ENDIF
#line 131 "while.y"
    {
		if(yystack_[3].value.as < type > () != boolean)
		{
		   semantic_error(yystack_[4].location.begin.line, "Type error.");
		}
    }
#line 784 "while.tab.cc"
    break;

  case 14: // statement: T_IF expression T_THEN statements T_ELSE statements T_ENDIF
#line 139 "while.y"
    {
		if(yystack_[5].value.as < type > () != boolean)
		{
		   semantic_error(yystack_[6].location.begin.line, "Type error.");
		}
    }
#line 795 "while.tab.cc"
    break;

  case 15: // statement: T_WHILE expression T_DO statements T_DONE
#line 147 "while.y"
    {
		if(yystack_[3].value.as < type > () != boolean)
		{
		   semantic_error(yystack_[4].location.begin.line, "Type error.");
		}
    }
#line 806 "while.tab.cc"
    break;

  case 16: // statement: T_REPEAT statements T_UNTIL expression
#line 155 "while.y"
        {
		if(yystack_[0].value.as < type > () != boolean){
			semantic_error(yystack_[3].location.begin.line, "Type error.");
		}
	}
#line 816 "while.tab.cc"
    break;

  case 17: // statement: T_FOR T_ID T_FROM expression T_UPTO expression T_DO statements T_DONE
#line 162 "while.y"
        {
		if( symbol_table.count(yystack_[7].value.as < std::string > ()) == 0 )
		{
			semantic_error(yystack_[8].location.begin.line, "Undeclared variable: " + yystack_[7].value.as < std::string > ());
		}
		if(yystack_[7].value.as < std::string > () != <std::string>){
			semantic_error(yystack_[8].location.begin.line, "Type error.");
		}

		if(yystack_[5].value.as < type > () != integer){
			semantic_error(yystack_[8].location.begin.line, "Type error.");
		}

		if(yystack_[3].value.as < type > () != integer){
			semantic_error(yystack_[8].location.begin.line, "Type error.");
		}
	}
#line 838 "while.tab.cc"
    break;

  case 18: // expression: T_NUM
#line 183 "while.y"
    {
		yylhs.value.as < type > () = integer;
    }
#line 846 "while.tab.cc"
    break;

  case 19: // expression: T_TRUE
#line 188 "while.y"
    {
		yylhs.value.as < type > () = boolean;
    }
#line 854 "while.tab.cc"
    break;

  case 20: // expression: T_FALSE
#line 193 "while.y"
    {
		yylhs.value.as < type > () = boolean;
    }
#line 862 "while.tab.cc"
    break;

  case 21: // expression: T_ID
#line 198 "while.y"
    {
		if( symbol_table.count(yystack_[0].value.as < std::string > ()) == 0 )
		{
			semantic_error(yystack_[0].location.begin.line, "Undeclared variable: " + yystack_[0].value.as < std::string > ());
		}
		yylhs.value.as < type > () = symbol_table[yystack_[0].value.as < std::string > ()];
    }
#line 874 "while.tab.cc"
    break;

  case 22: // expression: expression T_ADD expression
#line 207 "while.y"
    {
		if(yystack_[2].value.as < type > () != integer || yystack_[0].value.as < type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
           
		}
		yylhs.value.as < type > () = integer;
    }
#line 887 "while.tab.cc"
    break;

  case 23: // expression: expression T_SUB expression
#line 217 "while.y"
    {
		if(yystack_[2].value.as < type > () != integer || yystack_[0].value.as < type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = integer;
    }
#line 899 "while.tab.cc"
    break;

  case 24: // expression: expression T_MUL expression
#line 226 "while.y"
    {
		if(yystack_[2].value.as < type > () != integer || yystack_[0].value.as < type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = integer;
    }
#line 911 "while.tab.cc"
    break;

  case 25: // expression: expression T_DIV expression
#line 235 "while.y"
    {
		if(yystack_[2].value.as < type > () != integer || yystack_[0].value.as < type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = integer;
    }
#line 923 "while.tab.cc"
    break;

  case 26: // expression: expression T_MOD expression
#line 244 "while.y"
    {
		if(yystack_[2].value.as < type > () != integer || yystack_[0].value.as < type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = integer;
    }
#line 935 "while.tab.cc"
    break;

  case 27: // expression: expression T_LESS expression
#line 253 "while.y"
    {
		if(yystack_[2].value.as < type > () != integer || yystack_[0].value.as < type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = boolean;
    }
#line 947 "while.tab.cc"
    break;

  case 28: // expression: expression T_GR expression
#line 262 "while.y"
    {
		if(yystack_[2].value.as < type > () != integer || yystack_[0].value.as < type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = boolean;
    }
#line 959 "while.tab.cc"
    break;

  case 29: // expression: expression T_EQ expression
#line 271 "while.y"
    {
		if(yystack_[2].value.as < type > () != yystack_[0].value.as < type > ())
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = boolean;
    }
#line 971 "while.tab.cc"
    break;

  case 30: // expression: expression T_AND expression
#line 280 "while.y"
    {
		if(yystack_[2].value.as < type > () != boolean || yystack_[0].value.as < type > () != boolean)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = boolean;
    }
#line 983 "while.tab.cc"
    break;

  case 31: // expression: expression T_OR expression
#line 289 "while.y"
    {
		if(yystack_[2].value.as < type > () != boolean || yystack_[0].value.as < type > () != boolean)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = boolean;
    }
#line 995 "while.tab.cc"
    break;

  case 32: // expression: T_NOT expression
#line 298 "while.y"
    {
		if(yystack_[0].value.as < type > () != boolean)
		{
		   semantic_error(yystack_[1].location.begin.line, "Type error.");
		}
		yylhs.value.as < type > () = boolean;
    }
#line 1007 "while.tab.cc"
    break;

  case 33: // expression: T_OPEN expression T_CLOSE
#line 307 "while.y"
    {
		yylhs.value.as < type > () = yystack_[1].value.as < type > ();
    }
#line 1015 "while.tab.cc"
    break;


#line 1019 "while.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        std::string msg = YY_("syntax error");
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

#if YYDEBUG || 0
  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytname_[yysymbol];
  }
#endif // #if YYDEBUG || 0









  const signed char parser::yypact_ninf_ = -29;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
      -1,   -12,    21,     1,   -29,    -2,     0,    22,     1,     6,
      19,   123,   -29,   -29,   -29,    43,   -19,   -19,    42,    44,
      46,   123,    15,    67,   123,   -29,   -19,   -29,   -29,   -29,
     -29,   -19,    53,    63,    48,   -19,   -19,    49,    50,   -29,
     -29,   121,   -29,   123,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   123,    54,   141,    20,   -19,   -19,
     -29,     4,   130,   130,     9,    31,    31,   -28,   -28,   -29,
     -29,   -29,    65,    60,    64,   -29,   151,    75,   123,   -29,
     -29,   -29,   -29,   -19,    69,    90,   -29,   123,   101,   -29
  };

  const signed char
  parser::yydefact_[] =
  {
       0,     0,     0,     3,     1,     0,     0,     0,     3,     0,
       0,     0,     4,     5,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     9,     0,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       8,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,    31,    30,    29,    27,    28,    22,    23,    24,
      25,    26,     0,     0,     0,    10,    16,     0,     0,    13,
      15,    11,    12,     0,     0,     0,    14,     0,     0,    17
  };

  const signed char
  parser::yypgoto_[] =
  {
     -29,   -29,   109,   -29,    -4,   -29,   -17
  };

  const signed char
  parser::yydefgoto_[] =
  {
       0,     2,     7,     8,    23,    24,    32
  };

  const signed char
  parser::yytable_[] =
  {
      33,    26,     1,    27,    28,    29,    30,     5,     6,    41,
      51,    52,    53,     3,    42,    78,    79,    37,    56,    57,
      40,     4,    31,     9,    13,    10,    11,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    14,    75,    61,
      38,    76,    77,    47,    48,    49,    50,    51,    52,    53,
      72,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    25,    34,    43,    35,    36,    85,    49,    50,    51,
      52,    53,    39,    55,    84,    73,    58,    54,    81,    59,
      80,    86,    82,    88,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    87,    83,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    89,    12,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    15,    16,     0,     0,     0,    17,     0,     0,    18,
      19,     0,    60,     0,     0,     0,     0,     0,    20,    21,
       0,    22,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    74,    46,    47,    48,    49,    50,    51,    52,
      53,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53
  };

  const signed char
  parser::yycheck_[] =
  {
      17,    20,     3,    22,    23,    24,    25,     6,     7,    26,
      38,    39,    40,    25,    31,    11,    12,    21,    35,    36,
      24,     0,    41,    25,    18,    25,     4,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    18,    18,    43,
      25,    58,    59,    34,    35,    36,    37,    38,    39,    40,
      54,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    18,    20,    10,    20,    19,    83,    36,    37,    38,
      39,    40,     5,    25,    78,    21,    27,    14,    18,    29,
      15,    12,    18,    87,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    14,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    15,     8,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    21,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    21,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    43,    25,     0,     6,     7,    44,    45,    25,
      25,     4,    44,    18,    18,     8,     9,    13,    16,    17,
      25,    26,    28,    46,    47,    18,    20,    22,    23,    24,
      25,    41,    48,    48,    20,    20,    19,    46,    25,     5,
      46,    48,    48,    10,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    14,    25,    48,    48,    27,    29,
      21,    46,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    46,    21,    21,    18,    48,    48,    11,    12,
      15,    18,    18,    30,    46,    48,    12,    14,    46,    15
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     6,     0,     2,     3,     3,     1,     2,     2,
       4,     5,     5,     5,     7,     5,     4,     9,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "T_PROGRAM", "T_BEGIN",
  "T_END", "T_INTEGER", "T_BOOLEAN", "T_SKIP", "T_IF", "T_THEN", "T_ELSE",
  "T_ENDIF", "T_WHILE", "T_DO", "T_DONE", "T_READ", "T_WRITE",
  "T_SEMICOLON", "T_ASSIGN", "T_OPEN", "T_CLOSE", "T_NUM", "T_TRUE",
  "T_FALSE", "T_ID", "T_REPEAT", "T_UNTIL", "T_FOR", "T_FROM", "T_UPTO",
  "T_OR", "T_AND", "T_EQ", "T_LESS", "T_GR", "T_ADD", "T_SUB", "T_MUL",
  "T_DIV", "T_MOD", "T_NOT", "$accept", "start", "declarations",
  "declaration", "statements", "statement", "expression", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,    56,    56,    63,    66,    72,    81,    92,    96,   102,
     106,   118,   126,   130,   138,   146,   154,   161,   182,   187,
     192,   197,   206,   216,   225,   234,   243,   252,   261,   270,
     279,   288,   297,   306
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  parser::symbol_kind_type
  parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
    };
    // Last valid token kind.
    const int code_max = 296;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

} // yy
#line 1446 "while.tab.cc"

