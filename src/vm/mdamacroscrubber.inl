//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
//

#ifndef MDA_MACRO_DEFAULTS
#define MDA_MACRO_DEFAULTS

#ifndef MDA_DEFINE_ASSISTANT
#define MDA_DEFINE_ASSISTANT(ASSISTANT, SOS) // Did you forget to define a class Mda##Assistant?
#endif
#ifndef MDA_DEFINE_ASSISTANT_END
#define MDA_DEFINE_ASSISTANT_END(ASSISTANT)
#endif
#ifndef MDA_GFLAG_ACTIVATION
#define MDA_GFLAG_ACTIVATION(ASSISTANT, GFLAG)
#endif

#ifndef MDA_DEFINE_INPUT
#define MDA_DEFINE_INPUT(ASSISTANT)
#endif
#ifndef MDA_DEFINE_INPUT_END
#define MDA_DEFINE_INPUT_END(ASSISTANT)
#endif
#ifndef MDA_DEFINE_INPUT_AS_SWITCH
#define MDA_DEFINE_INPUT_AS_SWITCH(ASSISTANT)
#endif
#ifndef MDA_DEFINE_OUTPUT
#define MDA_DEFINE_OUTPUT(ASSISTANT)
#endif
#ifndef MDA_DEFINE_OUTPUT_END
#define MDA_DEFINE_OUTPUT_END(ASSISTANT)
#endif

#ifndef MDA_XSD_INPUT_ONLY
#define MDA_XSD_INPUT_ONLY()
#endif
#ifndef MDA_XSD_INPUT_ONLY_END
#define MDA_XSD_INPUT_ONLY_END()
#endif
#ifndef MDA_XSD_OUTPUT_ONLY
#define MDA_XSD_OUTPUT_ONLY()
#endif
#ifndef MDA_XSD_OUTPUT_ONLY_END
#define MDA_XSD_OUTPUT_ONLY_END()
#endif

#ifndef MDA_XSD_SCHEMA_SCHEMA
#define MDA_XSD_SCHEMA_SCHEMA()
#endif
#ifndef MDA_XSD_SCHEMA_SCHEMA_END
#define MDA_XSD_SCHEMA_SCHEMA_END()
#endif

#ifndef MDA_XSD_ASSISTANT_SCHEMA
#define MDA_XSD_ASSISTANT_SCHEMA()
#endif
#ifndef MDA_XSD_ASSISTANT_SCHEMA_END
#define MDA_XSD_ASSISTANT_SCHEMA_END()
#endif

#ifndef MDA_XSD_ELEMENT
#define MDA_XSD_ELEMENT(NAME)
#endif
#ifndef MDA_XSD__ELEMENT
#define MDA_XSD__ELEMENT(NAME)
#endif
#ifndef MDA_XSD_ELEMENT_END
#define MDA_XSD_ELEMENT_END(NAME)
#endif
#ifndef MDA_XSD_ELEMENT_ANY
#define MDA_XSD_ELEMENT_ANY(NAME)
#endif
#ifndef MDA_XSD_ELEMENT__ANY
#define MDA_XSD_ELEMENT__ANY(NAME)
#endif
#ifndef MDA_XSD_ELEMENT_ANY_END
#define MDA_XSD_ELEMENT_ANY_END(NAME)
#endif
#ifndef MDA_XSD_DEFINE_ELEMENT
#define MDA_XSD_DEFINE_ELEMENT(NAME)
#endif
#ifndef MDA_XSD_DEFINE_ELEMENT_END
#define MDA_XSD_DEFINE_ELEMENT_END(NAME)
#endif

#ifndef MDA_XSD_DEFINE_TYPE
#define MDA_XSD_DEFINE_TYPE(NAME)
#endif
#ifndef MDA_XSD_DEFINE_TYPE_END
#define MDA_XSD_DEFINE_TYPE_END(NAME)
#endif
#ifndef MDA_XSD_ELEMENT_REF
#define MDA_XSD_ELEMENT_REF(NAME)
#endif
#ifndef MDA_XSD_TYPEDEF_ELEMENT
#define MDA_XSD_TYPEDEF_ELEMENT(NAME, TYPE)
#endif
#ifndef MDA_XSD_ELEMENT_REFTYPE
#define MDA_XSD_ELEMENT_REFTYPE(NAME, TYPE)
#endif
#ifndef MDA_XSD_ELEMENT__REFTYPE
#define MDA_XSD_ELEMENT__REFTYPE(NAME, TYPE)
#endif
#ifndef MDA_XSD_ELEMENT_EXTEND_TYPE
#define MDA_XSD_ELEMENT_EXTEND_TYPE(NAME, TYPE)
#endif
#ifndef MDA_XSD_ELEMENT_EXTEND__TYPE
#define MDA_XSD_ELEMENT_EXTEND__TYPE(NAME, TYPE)
#endif
#ifndef MDA_XSD_ELEMENT_EXTEND_TYPE_END
#define MDA_XSD_ELEMENT_EXTEND_TYPE_END(NAME, TYPE)
#endif

#ifndef MDA_XSD_DEFINE_EXTEND_ELEMENT
#define MDA_XSD_DEFINE_EXTEND_ELEMENT(NAME, TYPE)
#endif
#ifndef MDA_XSD_DEFINE_EXTEND_ELEMENT_END
#define MDA_XSD_DEFINE_EXTEND_ELEMENT_END(NAME, TYPE)
#endif

#ifndef MDA_XSD_ATTRIBUTE_OPT
#define MDA_XSD_ATTRIBUTE_OPT(NAME,TYPE)
#endif
#ifndef MDA_XSD_ATTRIBUTE__OPT
#define MDA_XSD_ATTRIBUTE__OPT(NAME,TYPE)
#endif
#ifndef MDA_XSD_ATTRIBUTE_REQ
#define MDA_XSD_ATTRIBUTE_REQ(NAME,TYPE)
#endif
#ifndef MDA_XSD_ATTRIBUTE__REQ
#define MDA_XSD_ATTRIBUTE__REQ(NAME,TYPE)
#endif
#ifndef MDA_XSD_ATTRIBUTE_DEFAULT
#define MDA_XSD_ATTRIBUTE_DEFAULT(NAME,TYPE,DEFAULT)
#endif
#ifndef MDA_XSD_ATTRIBUTE__DEFAULT
#define MDA_XSD_ATTRIBUTE__DEFAULT(NAME,TYPE,DEFAULT)
#endif
#ifndef MDA_XSD_DEFINE_ATTRIBUTE
#define MDA_XSD_DEFINE_ATTRIBUTE(NAME,TYPE)
#endif


#ifndef MDA_XSD_COMPLEX_TYPE
#define MDA_XSD_COMPLEX_TYPE()
#endif
#ifndef MDA_XSD_COMPLEX_TYPE_END
#define MDA_XSD_COMPLEX_TYPE_END()
#endif

#ifndef MDA_XSD_ONCE
#define MDA_XSD_ONCE()
#endif
#ifndef MDA_XSD_ONCE_END
#define MDA_XSD_ONCE_END()
#endif
#ifndef MDA_XSD_OPTIONAL
#define MDA_XSD_OPTIONAL()
#endif
#ifndef MDA_XSD_OPTIONAL_END
#define MDA_XSD_OPTIONAL_END()
#endif
#ifndef MDA_XSD_PERIODIC
#define MDA_XSD_PERIODIC()
#endif
#ifndef MDA_XSD_PERIODIC_END
#define MDA_XSD_PERIODIC_END()
#endif

#ifndef MDA_XSD_GROUP
#define MDA_XSD_GROUP(NAME)
#endif
#ifndef MDA_XSD_GROUP_END
#define MDA_XSD_GROUP_END(NAME)
#endif
#ifndef MDA_XSD_GROUP_REF
#define MDA_XSD_GROUP_REF(NAME)
#endif

#ifndef MDA_XSD_DEFINE_EXTEND_TYPE
#define MDA_XSD_DEFINE_EXTEND_TYPE(NAME, TYPE)
#endif
#ifndef MDA_XSD_DEFINE_EXTEND_TYPE_END
#define MDA_XSD_DEFINE_EXTEND_TYPE_END(NAME, TYPE)
#endif

#ifndef MDA_XSD_EXTENSION
#define MDA_XSD_EXTENSION()
#endif
#ifndef MDA_XSD_EXTENSION_END
#define MDA_XSD_EXTENSION_END()
#endif

#ifndef MDA_XSD_CHOICE
#define MDA_XSD_CHOICE()
#endif
#ifndef MDA_XSD_CHOICE_END
#define MDA_XSD_CHOICE_END()
#endif

#ifndef MDA_GROUP_DEFINITION
#define MDA_GROUP_DEFINITION(NAME)
#endif
#ifndef MDA_GROUP_DEFINITION_END
#define MDA_GROUP_DEFINITION_END(NAME)
#endif
#ifndef MDA_GROUP_MEMBER
#define MDA_GROUP_MEMBER(NAME)
#endif



#else 
#undef MDA_MACRO_DEFAULTS

#undef MDA_DEFINE_SCHEMA
#undef MDA_XSD_ASSISTANT_SCHEMA
#undef MDA_XSD_ASSISTANT_SCHEMA_END
#undef MDA_XSD_SCHEMA_SCHEMA
#undef MDA_XSD_SCHEMA_SCHEMA_END

#undef MDA_DEFINE_ASSISTANT
#undef MDA_DEFINE_ASSISTANT_END
#undef MDA_GFLAG_ACTIVATION

#undef MDA_DEFINE_INPUT
#undef MDA_DEFINE_INPUT_END
#undef MDA_DEFINE_INPUT_AS_SWITCH
#undef MDA_DEFINE_OUTPUT
#undef MDA_DEFINE_OUTPUT_END

#undef MDA_XSD_INPUT_ONLY
#undef MDA_XSD_INPUT_ONLY_END
#undef MDA_XSD_OUTPUT_ONLY
#undef MDA_XSD_OUTPUT_ONLY_END

#undef MDA_XSD_ELEMENT
#undef MDA_XSD__ELEMENT
#undef MDA_XSD_ELEMENT_ANY
#undef MDA_XSD_ELEMENT__ANY
#undef MDA_XSD_ELEMENT_ANY_END
#undef MDA_XSD_ELEMENT_END
#undef MDA_XSD_DEFINE_ELEMENT
#undef MDA_XSD_DEFINE_ELEMENT_END

#undef MDA_XSD_DEFINE_TYPE
#undef MDA_XSD_DEFINE_TYPE_END
#undef MDA_XSD_ELEMENT_REF
#undef MDA_XSD_TYPEDEF_ELEMENT
#undef MDA_XSD_ELEMENT_REFTYPE
#undef MDA_XSD_ELEMENT__REFTYPE
#undef MDA_XSD_ELEMENT_EXTEND_TYPE
#undef MDA_XSD_ELEMENT_EXTEND__TYPE
#undef MDA_XSD_ELEMENT_EXTEND_TYPE_END

#undef MDA_XSD_DEFINE_EXTEND_ELEMENT
#undef MDA_XSD_DEFINE_EXTEND_ELEMENT_END

#undef MDA_XSD_ATTRIBUTE_OPT
#undef MDA_XSD_ATTRIBUTE__OPT
#undef MDA_XSD_ATTRIBUTE_REQ
#undef MDA_XSD_ATTRIBUTE__REQ
#undef MDA_XSD_ATTRIBUTE_DEFAULT
#undef MDA_XSD_ATTRIBUTE__DEFAULT
#undef MDA_XSD_DEFINE_ATTRIBUTE


#undef MDA_XSD_COMPLEX_TYPE
#undef MDA_XSD_COMPLEX_TYPE_END

#undef MDA_XSD_ONCE
#undef MDA_XSD_ONCE_END
#undef MDA_XSD_OPTIONAL
#undef MDA_XSD_OPTIONAL_END
#undef MDA_XSD_PERIODIC
#undef MDA_XSD_PERIODIC_END

#undef MDA_XSD_GROUP
#undef MDA_XSD_GROUP_END
#undef MDA_XSD_GROUP_REF

#undef MDA_XSD_DEFINE_EXTEND_TYPE
#undef MDA_XSD_DEFINE_EXTEND_TYPE_END
#undef MDA_XSD_EXTENSION
#undef MDA_XSD_EXTENSION_END

#undef MDA_XSD_CHOICE
#undef MDA_XSD_CHOICE_END

#undef MDA_GROUP_DEFINITION
#undef MDA_GROUP_DEFINITION_END
#undef MDA_GROUP_MEMBER


#endif
