// DON'T EDIT MANUALLY !!!!
// auto-generated by gen_txt.py !!!!

#include "BaseUtil.h"
#include "SerializeTxt.h"
#include "MuiDefs.h"

using namespace sertxt;

#define of offsetof
const FieldMetadata gButtonVectorDefFieldMetadata[] = {
    { of(ButtonVectorDef, name),           TYPE_STR, NULL },
    { of(ButtonVectorDef, clicked),        TYPE_STR, NULL },
    { of(ButtonVectorDef, path),           TYPE_STR, NULL },
    { of(ButtonVectorDef, styleDefault),   TYPE_STR, NULL },
    { of(ButtonVectorDef, styleMouseOver), TYPE_STR, NULL },
};

const StructMetadata gButtonVectorDefMetadata = {
    sizeof(ButtonVectorDef),
    5,
    "name\0clicked\0path\0style_default\0style_mouse_over\0\0",
    &gButtonVectorDefFieldMetadata[0]
};

const FieldMetadata gButtonDefFieldMetadata[] = {
    { of(ButtonDef, name),  TYPE_STR,  NULL },
    { of(ButtonDef, text),  TYPE_WSTR, NULL },
    { of(ButtonDef, style), TYPE_STR,  NULL },
};

const StructMetadata gButtonDefMetadata = {
    sizeof(ButtonDef),
    3,
    "name\0text\0style\0\0",
    &gButtonDefFieldMetadata[0]
};

const FieldMetadata gScrollBarDefFieldMetadata[] = {
    { of(ScrollBarDef, name),   TYPE_STR, NULL },
    { of(ScrollBarDef, style),  TYPE_STR, NULL },
    { of(ScrollBarDef, cursor), TYPE_STR, NULL },
};

const StructMetadata gScrollBarDefMetadata = {
    sizeof(ScrollBarDef),
    3,
    "name\0style\0cursor\0\0",
    &gScrollBarDefFieldMetadata[0]
};

const FieldMetadata gDirectionalLayoutDataDefFieldMetadata[] = {
    { of(DirectionalLayoutDataDef, controlName), TYPE_STR, NULL },
    { of(DirectionalLayoutDataDef, sla),         TYPE_STR, NULL },
    { of(DirectionalLayoutDataDef, snla),        TYPE_STR, NULL },
    { of(DirectionalLayoutDataDef, align),       TYPE_STR, NULL },
};

const StructMetadata gDirectionalLayoutDataDefMetadata = {
    sizeof(DirectionalLayoutDataDef),
    4,
    "control_name\0sla\0snla\0align\0\0",
    &gDirectionalLayoutDataDefFieldMetadata[0]
};

const FieldMetadata gHorizontalLayoutDefFieldMetadata[] = {
    { of(HorizontalLayoutDef, name),     TYPE_STR,                                     NULL                                          },
    { of(HorizontalLayoutDef, children), (Type)(TYPE_ARRAY | TYPE_STORE_COMPACT_MASK), (uintptr_t)&gDirectionalLayoutDataDefMetadata },
};

const StructMetadata gHorizontalLayoutDefMetadata = {
    sizeof(HorizontalLayoutDef),
    2,
    "name\0children\0\0",
    &gHorizontalLayoutDefFieldMetadata[0]
};

const FieldMetadata gVerticalLayoutDefFieldMetadata[] = {
    { of(VerticalLayoutDef, name),     TYPE_STR,                                     NULL                                          },
    { of(VerticalLayoutDef, children), (Type)(TYPE_ARRAY | TYPE_STORE_COMPACT_MASK), (uintptr_t)&gDirectionalLayoutDataDefMetadata },
};

const StructMetadata gVerticalLayoutDefMetadata = {
    sizeof(VerticalLayoutDef),
    2,
    "name\0children\0\0",
    &gVerticalLayoutDefFieldMetadata[0]
};

#undef of






