
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Float32Sample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Float32SamplePlugin_220235351_h
#define Float32SamplePlugin_220235351_h

#include "Float32Sample.h"

#include "MessagePlugin.h"




struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


namespace rapid{

namespace ext{

namespace arc{

/* The type used to store keys for instances of type struct
 * Float32Sample.
 *
 * By default, this type is struct Float32Sample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct Float32Sample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct Float32Sample, the
 * following restriction applies: the key of struct
 * Float32Sample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct Float32Sample.
*/
typedef  class Float32Sample Float32SampleKeyHolder;


#define Float32SamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Float32SamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Float32SamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define Float32SamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define Float32SamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define Float32SamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Float32SamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Float32Sample*
Float32SamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Float32Sample*
Float32SamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Float32Sample*
Float32SamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Float32SamplePluginSupport_copy_data(
    Float32Sample *out,
    const Float32Sample *in);

NDDSUSERDllExport extern void 
Float32SamplePluginSupport_destroy_data_w_params(
    Float32Sample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Float32SamplePluginSupport_destroy_data_ex(
    Float32Sample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Float32SamplePluginSupport_destroy_data(
    Float32Sample *sample);

NDDSUSERDllExport extern void 
Float32SamplePluginSupport_print_data(
    const Float32Sample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern Float32Sample*
Float32SamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Float32Sample*
Float32SamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
Float32SamplePluginSupport_destroy_key_ex(
    Float32SampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Float32SamplePluginSupport_destroy_key(
    Float32SampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Float32SamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Float32SamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Float32SamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Float32SamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Float32SamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Float32Sample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Float32Sample *out,
    const Float32Sample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Float32Sample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Float32Sample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Float32Sample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Float32SamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Float32SamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Float32SamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Float32SamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Float32Sample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Float32SamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Float32SamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Float32Sample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Float32Sample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Float32Sample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Float32SamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Float32Sample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Float32SampleKeyHolder *key, 
    const Float32Sample *instance);

NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Float32Sample *instance, 
    const Float32SampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Float32Sample *instance);

NDDSUSERDllExport extern RTIBool 
Float32SamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Float32SamplePlugin_new(void);

NDDSUSERDllExport extern void
Float32SamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* Float32SamplePlugin_220235351_h */
