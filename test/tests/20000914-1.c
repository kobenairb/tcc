extern void *malloc(__SIZE_TYPE__);

enum tree_code {
    ERROR_MARK,
    IDENTIFIER_NODE,
    OP_IDENTIFIER,
    TREE_LIST,
    TREE_VEC,
    BLOCK,
    VOID_TYPE,
    INTEGER_TYPE,
    REAL_TYPE,
    COMPLEX_TYPE,
    VECTOR_TYPE,
    ENUMERAL_TYPE,
    BOOLEAN_TYPE,
    CHAR_TYPE,
    POINTER_TYPE,
    OFFSET_TYPE,
    REFERENCE_TYPE,
    METHOD_TYPE,
    FILE_TYPE,
    ARRAY_TYPE,
    SET_TYPE,
    RECORD_TYPE,
    UNION_TYPE,
    QUAL_UNION_TYPE,
    FUNCTION_TYPE,
    LANG_TYPE,
    INTEGER_CST,
    REAL_CST,
    COMPLEX_CST,
    STRING_CST,
    FUNCTION_DECL,
    LABEL_DECL,
    CONST_DECL,
    TYPE_DECL,
    VAR_DECL,
    PARM_DECL,
    RESULT_DECL,
    FIELD_DECL,
    NAMESPACE_DECL,
    COMPONENT_REF,
    BIT_FIELD_REF,
    INDIRECT_REF,
    BUFFER_REF,
    ARRAY_REF,
    CONSTRUCTOR,
    COMPOUND_EXPR,
    MODIFY_EXPR,
    INIT_EXPR,
    TARGET_EXPR,
    COND_EXPR,
    BIND_EXPR,
    CALL_EXPR,
    METHOD_CALL_EXPR,
    WITH_CLEANUP_EXPR,
    CLEANUP_POINT_EXPR,
    PLACEHOLDER_EXPR,
    WITH_RECORD_EXPR,
    PLUS_EXPR,
    MINUS_EXPR,
    MULT_EXPR,
    TRUNC_DIV_EXPR,
    CEIL_DIV_EXPR,
    FLOOR_DIV_EXPR,
    ROUND_DIV_EXPR,
    TRUNC_MOD_EXPR,
    CEIL_MOD_EXPR,
    FLOOR_MOD_EXPR,
    ROUND_MOD_EXPR,
    RDIV_EXPR,
    EXACT_DIV_EXPR,
    FIX_TRUNC_EXPR,
    FIX_CEIL_EXPR,
    FIX_FLOOR_EXPR,
    FIX_ROUND_EXPR,
    FLOAT_EXPR,
    EXPON_EXPR,
    NEGATE_EXPR,
    MIN_EXPR,
    MAX_EXPR,
    ABS_EXPR,
    FFS_EXPR,
    LSHIFT_EXPR,
    RSHIFT_EXPR,
    LROTATE_EXPR,
    RROTATE_EXPR,
    BIT_IOR_EXPR,
    BIT_XOR_EXPR,
    BIT_AND_EXPR,
    BIT_ANDTC_EXPR,
    BIT_NOT_EXPR,
    TRUTH_ANDIF_EXPR,
    TRUTH_ORIF_EXPR,
    TRUTH_AND_EXPR,
    TRUTH_OR_EXPR,
    TRUTH_XOR_EXPR,
    TRUTH_NOT_EXPR,
    LT_EXPR,
    LE_EXPR,
    GT_EXPR,
    GE_EXPR,
    EQ_EXPR,
    NE_EXPR,
    UNORDERED_EXPR,
    ORDERED_EXPR,
    UNLT_EXPR,
    UNLE_EXPR,
    UNGT_EXPR,
    UNGE_EXPR,
    UNEQ_EXPR,
    IN_EXPR,
    SET_LE_EXPR,
    CARD_EXPR,
    RANGE_EXPR,
    CONVERT_EXPR,
    NOP_EXPR,
    NON_LVALUE_EXPR,
    SAVE_EXPR,
    UNSAVE_EXPR,
    RTL_EXPR,
    ADDR_EXPR,
    REFERENCE_EXPR,
    ENTRY_VALUE_EXPR,
    COMPLEX_EXPR,
    CONJ_EXPR,
    REALPART_EXPR,
    IMAGPART_EXPR,
    PREDECREMENT_EXPR,
    PREINCREMENT_EXPR,
    POSTDECREMENT_EXPR,
    POSTINCREMENT_EXPR,
    VA_ARG_EXPR,
    TRY_CATCH_EXPR,
    TRY_FINALLY_EXPR,
    GOTO_SUBROUTINE_EXPR,
    POPDHC_EXPR,
    POPDCC_EXPR,
    LABEL_EXPR,
    GOTO_EXPR,
    RETURN_EXPR,
    EXIT_EXPR,
    LOOP_EXPR,
    LABELED_BLOCK_EXPR,
    EXIT_BLOCK_EXPR,
    EXPR_WITH_FILE_LOCATION,
    SWITCH_EXPR,
    LAST_AND_UNUSED_TREE_CODE
};
typedef union tree_node *tree;
struct tree_common
{
    union tree_node *chain;
    union tree_node *type;
    enum tree_code code : 8;
    unsigned side_effects_flag : 1;
    unsigned constant_flag : 1;
    unsigned permanent_flag : 1;
    unsigned addressable_flag : 1;
    unsigned volatile_flag : 1;
    unsigned readonly_flag : 1;
    unsigned unsigned_flag : 1;
    unsigned asm_written_flag : 1;
    unsigned used_flag : 1;
    unsigned nothrow_flag : 1;
    unsigned static_flag : 1;
    unsigned public_flag : 1;
    unsigned private_flag : 1;
    unsigned protected_flag : 1;
    unsigned bounded_flag : 1;
    unsigned lang_flag_0 : 1;
    unsigned lang_flag_1 : 1;
    unsigned lang_flag_2 : 1;
    unsigned lang_flag_3 : 1;
    unsigned lang_flag_4 : 1;
    unsigned lang_flag_5 : 1;
    unsigned lang_flag_6 : 1;
};
union tree_node {
    struct tree_common common;
};
enum c_tree_code {
    C_DUMMY_TREE_CODE = LAST_AND_UNUSED_TREE_CODE,
    SRCLOC,
    SIZEOF_EXPR,
    ARROW_EXPR,
    ALIGNOF_EXPR,
    EXPR_STMT,
    COMPOUND_STMT,
    DECL_STMT,
    IF_STMT,
    FOR_STMT,
    WHILE_STMT,
    DO_STMT,
    RETURN_STMT,
    BREAK_STMT,
    CONTINUE_STMT,
    SWITCH_STMT,
    GOTO_STMT,
    LABEL_STMT,
    ASM_STMT,
    SCOPE_STMT,
    CASE_LABEL,
    STMT_EXPR,
    LAST_C_TREE_CODE
};
enum cplus_tree_code {
    CP_DUMMY_TREE_CODE = LAST_C_TREE_CODE,
    OFFSET_REF,
    PTRMEM_CST,
    NEW_EXPR,
    VEC_NEW_EXPR,
    DELETE_EXPR,
    VEC_DELETE_EXPR,
    SCOPE_REF,
    MEMBER_REF,
    TYPE_EXPR,
    AGGR_INIT_EXPR,
    THROW_EXPR,
    EMPTY_CLASS_EXPR,
    TEMPLATE_DECL,
    TEMPLATE_PARM_INDEX,
    TEMPLATE_TYPE_PARM,
    TEMPLATE_TEMPLATE_PARM,
    BOUND_TEMPLATE_TEMPLATE_PARM,
    TYPENAME_TYPE,
    TYPEOF_TYPE,
    USING_DECL,
    DEFAULT_ARG,
    TEMPLATE_ID_EXPR,
    CPLUS_BINDING,
    OVERLOAD,
    WRAPPER,
    LOOKUP_EXPR,
    FUNCTION_NAME,
    MODOP_EXPR,
    CAST_EXPR,
    REINTERPRET_CAST_EXPR,
    CONST_CAST_EXPR,
    STATIC_CAST_EXPR,
    DYNAMIC_CAST_EXPR,
    DOTSTAR_EXPR,
    TYPEID_EXPR,
    PSEUDO_DTOR_EXPR,
    SUBOBJECT,
    CTOR_STMT,
    CLEANUP_STMT,
    START_CATCH_STMT,
    CTOR_INITIALIZER,
    RETURN_INIT,
    TRY_BLOCK,
    HANDLER,
    TAG_DEFN,
    IDENTITY_CONV,
    LVALUE_CONV,
    QUAL_CONV,
    STD_CONV,
    PTR_CONV,
    PMEM_CONV,
    BASE_CONV,
    REF_BIND,
    USER_CONV,
    AMBIG_CONV,
    RVALUE_CONV,
    LAST_CPLUS_TREE_CODE
};

blah() {}

convert_like_real(convs) tree convs;
{
    switch (((enum tree_code)(convs)->common.code)) {
    case AMBIG_CONV:
        return blah();
    default:
        break;
    };
    abort();
}

main()
{
    tree convs = (void *) malloc(sizeof(struct tree_common));
    ;

    convs->common.code = AMBIG_CONV;
    convert_like_real(convs);
    exit(0);
}
