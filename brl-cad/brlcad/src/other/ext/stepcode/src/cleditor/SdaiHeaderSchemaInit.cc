#ifndef  SDAIHEADER_SECTION_SCHEMA_INIT_CC
#define  SDAIHEADER_SECTION_SCHEMA_INIT_CC
// This file was generated by exp2cxx.  You probably don't want to edit
// it since your modifications will be lost if exp2cxx is used to
// regenerate it.

#include <Registry.h>
#include <ExpDict.h>
#include <STEPattribute.h>
#include <SdaiHeaderSchema.h>

void SdaiHEADER_SECTION_SCHEMAInit( Registry & reg ) {
    header_section_schemat_time_stamp_text->ReferentType( t_sdaiSTRING );
    reg.AddType( *header_section_schemat_time_stamp_text );
    header_section_schemat_section_name->ReferentType( header_section_schemat_exchange_structure_identifier );
    reg.AddType( *header_section_schemat_section_name );
    header_section_schemat_context_name->ReferentType( t_sdaiSTRING );
    reg.AddType( *header_section_schemat_context_name );
    header_section_schemat_schema_name->ReferentType( t_sdaiSTRING );
    reg.AddType( *header_section_schemat_schema_name );
    header_section_schemat_language_name->ReferentType( header_section_schemat_exchange_structure_identifier );
    reg.AddType( *header_section_schemat_language_name );
    header_section_schemat_exchange_structure_identifier->ReferentType( t_sdaiSTRING );
    reg.AddType( *header_section_schemat_exchange_structure_identifier );

/////////         ENTITY section_language

    a_0section =
        new AttrDescriptor( "section", header_section_schemat_section_name,
                            LTrue, LTrue, AttrType_Explicit,
                            *header_section_schemae_section_language );
    header_section_schemae_section_language->AddExplicitAttr( a_0section );
    a_1default_language =
        new AttrDescriptor( "default_language", header_section_schemat_language_name,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_section_language );
    header_section_schemae_section_language->AddExplicitAttr( a_1default_language );
    reg.AddEntity( *header_section_schemae_section_language );
/////////         END_ENTITY section_language

/////////         ENTITY file_population

    a_2governing_schema =
        new AttrDescriptor( "governing_schema", header_section_schemat_schema_name,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_population );
    header_section_schemae_file_population->AddExplicitAttr( a_2governing_schema );
    a_3determination_method =
        new AttrDescriptor( "determination_method", header_section_schemat_exchange_structure_identifier,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_population );
    header_section_schemae_file_population->AddExplicitAttr( a_3determination_method );
    SetTypeDescriptor * t_0 = new SetTypeDescriptor;
    t_0->AssignAggrCreator( ( AggregateCreator ) create_StringAggregate );    // Creator function
    t_0->SetBound1( 1 );
    t_0->SetBound2( 2147483647 );
    t_0->FundamentalType( SET_TYPE );
    t_0->Description( "SET [1:?] OF section_name" );
    t_0->OriginatingSchema( s_header_section_schema );
    t_0->ReferentType( header_section_schemat_section_name );
    s_header_section_schema->AddUnnamedType( t_0 );
    a_4governed_sections =
        new AttrDescriptor( "governed_sections", t_0, LTrue, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_population );
    header_section_schemae_file_population->AddExplicitAttr( a_4governed_sections );
    reg.AddEntity( *header_section_schemae_file_population );
/////////         END_ENTITY file_population

/////////         ENTITY file_name

    a_5name =
        new AttrDescriptor( "name", t_sdaiSTRING,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_name );
    header_section_schemae_file_name->AddExplicitAttr( a_5name );
    a_6time_stamp =
        new AttrDescriptor( "time_stamp", header_section_schemat_time_stamp_text,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_name );
    header_section_schemae_file_name->AddExplicitAttr( a_6time_stamp );
    ListTypeDescriptor * t_1 = new ListTypeDescriptor;
    t_1->AssignAggrCreator( ( AggregateCreator ) create_StringAggregate );    // Creator function
    t_1->SetBound1( 1 );
    t_1->SetBound2( 2147483647 );
    t_1->FundamentalType( LIST_TYPE );
    t_1->Description( "LIST [1:?] OF STRING (256)" );
    t_1->OriginatingSchema( s_header_section_schema );
    t_1->ReferentType( t_sdaiSTRING );
    s_header_section_schema->AddUnnamedType( t_1 );
    a_7author =
        new AttrDescriptor( "author", t_1, LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_name );
    header_section_schemae_file_name->AddExplicitAttr( a_7author );
    ListTypeDescriptor * t_2 = new ListTypeDescriptor;
    t_2->AssignAggrCreator( ( AggregateCreator ) create_StringAggregate );    // Creator function
    t_2->SetBound1( 1 );
    t_2->SetBound2( 2147483647 );
    t_2->FundamentalType( LIST_TYPE );
    t_2->Description( "LIST [1:?] OF STRING (256)" );
    t_2->OriginatingSchema( s_header_section_schema );
    t_2->ReferentType( t_sdaiSTRING );
    s_header_section_schema->AddUnnamedType( t_2 );
    a_8organization =
        new AttrDescriptor( "organization", t_2, LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_name );
    header_section_schemae_file_name->AddExplicitAttr( a_8organization );
    a_9preprocessor_version =
        new AttrDescriptor( "preprocessor_version", t_sdaiSTRING,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_name );
    header_section_schemae_file_name->AddExplicitAttr( a_9preprocessor_version );
    a_10originating_system =
        new AttrDescriptor( "originating_system", t_sdaiSTRING,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_name );
    header_section_schemae_file_name->AddExplicitAttr( a_10originating_system );
    a_11authorization =
        new AttrDescriptor( "authorization", t_sdaiSTRING,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_name );
    header_section_schemae_file_name->AddExplicitAttr( a_11authorization );
    reg.AddEntity( *header_section_schemae_file_name );
/////////         END_ENTITY file_name

/////////         ENTITY section_context

    a_12section =
        new AttrDescriptor( "section", header_section_schemat_section_name,
                            LTrue, LTrue, AttrType_Explicit,
                            *header_section_schemae_section_context );
    header_section_schemae_section_context->AddExplicitAttr( a_12section );
    ListTypeDescriptor * t_3 = new ListTypeDescriptor;
    t_3->AssignAggrCreator( ( AggregateCreator ) create_StringAggregate );    // Creator function
    t_3->SetBound1( 1 );
    t_3->SetBound2( 2147483647 );
    t_3->FundamentalType( LIST_TYPE );
    t_3->Description( "LIST [1:?] OF context_name" );
    t_3->OriginatingSchema( s_header_section_schema );
    t_3->ReferentType( header_section_schemat_context_name );
    s_header_section_schema->AddUnnamedType( t_3 );
    a_13context_identifiers =
        new AttrDescriptor( "context_identifiers", t_3, LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_section_context );
    header_section_schemae_section_context->AddExplicitAttr( a_13context_identifiers );
    reg.AddEntity( *header_section_schemae_section_context );
/////////         END_ENTITY section_context

/////////         ENTITY file_description

    ListTypeDescriptor * t_4 = new ListTypeDescriptor;
    t_4->AssignAggrCreator( ( AggregateCreator ) create_StringAggregate );    // Creator function
    t_4->SetBound1( 1 );
    t_4->SetBound2( 2147483647 );
    t_4->FundamentalType( LIST_TYPE );
    t_4->Description( "LIST [1:?] OF STRING (256)" );
    t_4->OriginatingSchema( s_header_section_schema );
    t_4->ReferentType( t_sdaiSTRING );
    s_header_section_schema->AddUnnamedType( t_4 );
    a_14description =
        new AttrDescriptor( "description", t_4, LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_description );
    header_section_schemae_file_description->AddExplicitAttr( a_14description );
    a_15implementation_level =
        new AttrDescriptor( "implementation_level", t_sdaiSTRING,
                            LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_description );
    header_section_schemae_file_description->AddExplicitAttr( a_15implementation_level );
    reg.AddEntity( *header_section_schemae_file_description );
/////////         END_ENTITY file_description

/////////         ENTITY file_schema

    ListTypeDescriptor * t_5 = new ListTypeDescriptor;
    t_5->AssignAggrCreator( ( AggregateCreator ) create_StringAggregate );    // Creator function
    t_5->SetBound1( 1 );
    t_5->SetBound2( 2147483647 );
    t_5->UniqueElements( LTrue );
    t_5->FundamentalType( LIST_TYPE );
    t_5->Description( "LIST [1:?] OF UNIQUE schema_name" );
    t_5->OriginatingSchema( s_header_section_schema );
    t_5->ReferentType( header_section_schemat_schema_name );
    s_header_section_schema->AddUnnamedType( t_5 );
    a_16schema_identifiers =
        new AttrDescriptor( "schema_identifiers", t_5, LFalse, LFalse, AttrType_Explicit,
                            *header_section_schemae_file_schema );
    header_section_schemae_file_schema->AddExplicitAttr( a_16schema_identifiers );
    reg.AddEntity( *header_section_schemae_file_schema );
/////////         END_ENTITY file_schema

}
#endif
