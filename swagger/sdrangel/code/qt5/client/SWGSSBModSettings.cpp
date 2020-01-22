/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.1.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGSSBModSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSSBModSettings::SWGSSBModSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSSBModSettings::SWGSSBModSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    bandwidth = 0.0f;
    m_bandwidth_isSet = false;
    low_cutoff = 0.0f;
    m_low_cutoff_isSet = false;
    usb = 0;
    m_usb_isSet = false;
    tone_frequency = 0.0f;
    m_tone_frequency_isSet = false;
    volume_factor = 0.0f;
    m_volume_factor_isSet = false;
    span_log2 = 0;
    m_span_log2_isSet = false;
    audio_binaural = 0;
    m_audio_binaural_isSet = false;
    audio_flip_channels = 0;
    m_audio_flip_channels_isSet = false;
    dsb = 0;
    m_dsb_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    play_loop = 0;
    m_play_loop_isSet = false;
    agc = 0;
    m_agc_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    audio_device_name = nullptr;
    m_audio_device_name_isSet = false;
    mod_af_input = 0;
    m_mod_af_input_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    cw_keyer = nullptr;
    m_cw_keyer_isSet = false;
}

SWGSSBModSettings::~SWGSSBModSettings() {
    this->cleanup();
}

void
SWGSSBModSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    bandwidth = 0.0f;
    m_bandwidth_isSet = false;
    low_cutoff = 0.0f;
    m_low_cutoff_isSet = false;
    usb = 0;
    m_usb_isSet = false;
    tone_frequency = 0.0f;
    m_tone_frequency_isSet = false;
    volume_factor = 0.0f;
    m_volume_factor_isSet = false;
    span_log2 = 0;
    m_span_log2_isSet = false;
    audio_binaural = 0;
    m_audio_binaural_isSet = false;
    audio_flip_channels = 0;
    m_audio_flip_channels_isSet = false;
    dsb = 0;
    m_dsb_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    play_loop = 0;
    m_play_loop_isSet = false;
    agc = 0;
    m_agc_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    audio_device_name = new QString("");
    m_audio_device_name_isSet = false;
    mod_af_input = 0;
    m_mod_af_input_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    cw_keyer = new SWGCWKeyerSettings();
    m_cw_keyer_isSet = false;
}

void
SWGSSBModSettings::cleanup() {














    if(title != nullptr) { 
        delete title;
    }
    if(audio_device_name != nullptr) { 
        delete audio_device_name;
    }



    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(cw_keyer != nullptr) { 
        delete cw_keyer;
    }
}

SWGSSBModSettings*
SWGSSBModSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSSBModSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&bandwidth, pJson["bandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&low_cutoff, pJson["lowCutoff"], "float", "");
    
    ::SWGSDRangel::setValue(&usb, pJson["usb"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tone_frequency, pJson["toneFrequency"], "float", "");
    
    ::SWGSDRangel::setValue(&volume_factor, pJson["volumeFactor"], "float", "");
    
    ::SWGSDRangel::setValue(&span_log2, pJson["spanLog2"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_binaural, pJson["audioBinaural"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_flip_channels, pJson["audioFlipChannels"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dsb, pJson["dsb"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_mute, pJson["audioMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&play_loop, pJson["playLoop"], "qint32", "");
    
    ::SWGSDRangel::setValue(&agc, pJson["agc"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&audio_device_name, pJson["audioDeviceName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&mod_af_input, pJson["modAFInput"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&cw_keyer, pJson["cwKeyer"], "SWGCWKeyerSettings", "SWGCWKeyerSettings");
    
}

QString
SWGSSBModSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSSBModSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_bandwidth_isSet){
        obj->insert("bandwidth", QJsonValue(bandwidth));
    }
    if(m_low_cutoff_isSet){
        obj->insert("lowCutoff", QJsonValue(low_cutoff));
    }
    if(m_usb_isSet){
        obj->insert("usb", QJsonValue(usb));
    }
    if(m_tone_frequency_isSet){
        obj->insert("toneFrequency", QJsonValue(tone_frequency));
    }
    if(m_volume_factor_isSet){
        obj->insert("volumeFactor", QJsonValue(volume_factor));
    }
    if(m_span_log2_isSet){
        obj->insert("spanLog2", QJsonValue(span_log2));
    }
    if(m_audio_binaural_isSet){
        obj->insert("audioBinaural", QJsonValue(audio_binaural));
    }
    if(m_audio_flip_channels_isSet){
        obj->insert("audioFlipChannels", QJsonValue(audio_flip_channels));
    }
    if(m_dsb_isSet){
        obj->insert("dsb", QJsonValue(dsb));
    }
    if(m_audio_mute_isSet){
        obj->insert("audioMute", QJsonValue(audio_mute));
    }
    if(m_play_loop_isSet){
        obj->insert("playLoop", QJsonValue(play_loop));
    }
    if(m_agc_isSet){
        obj->insert("agc", QJsonValue(agc));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(audio_device_name != nullptr && *audio_device_name != QString("")){
        toJsonValue(QString("audioDeviceName"), audio_device_name, obj, QString("QString"));
    }
    if(m_mod_af_input_isSet){
        obj->insert("modAFInput", QJsonValue(mod_af_input));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }
    if((cw_keyer != nullptr) && (cw_keyer->isSet())){
        toJsonValue(QString("cwKeyer"), cw_keyer, obj, QString("SWGCWKeyerSettings"));
    }

    return obj;
}

qint64
SWGSSBModSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGSSBModSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGSSBModSettings::getBandwidth() {
    return bandwidth;
}
void
SWGSSBModSettings::setBandwidth(float bandwidth) {
    this->bandwidth = bandwidth;
    this->m_bandwidth_isSet = true;
}

float
SWGSSBModSettings::getLowCutoff() {
    return low_cutoff;
}
void
SWGSSBModSettings::setLowCutoff(float low_cutoff) {
    this->low_cutoff = low_cutoff;
    this->m_low_cutoff_isSet = true;
}

qint32
SWGSSBModSettings::getUsb() {
    return usb;
}
void
SWGSSBModSettings::setUsb(qint32 usb) {
    this->usb = usb;
    this->m_usb_isSet = true;
}

float
SWGSSBModSettings::getToneFrequency() {
    return tone_frequency;
}
void
SWGSSBModSettings::setToneFrequency(float tone_frequency) {
    this->tone_frequency = tone_frequency;
    this->m_tone_frequency_isSet = true;
}

float
SWGSSBModSettings::getVolumeFactor() {
    return volume_factor;
}
void
SWGSSBModSettings::setVolumeFactor(float volume_factor) {
    this->volume_factor = volume_factor;
    this->m_volume_factor_isSet = true;
}

qint32
SWGSSBModSettings::getSpanLog2() {
    return span_log2;
}
void
SWGSSBModSettings::setSpanLog2(qint32 span_log2) {
    this->span_log2 = span_log2;
    this->m_span_log2_isSet = true;
}

qint32
SWGSSBModSettings::getAudioBinaural() {
    return audio_binaural;
}
void
SWGSSBModSettings::setAudioBinaural(qint32 audio_binaural) {
    this->audio_binaural = audio_binaural;
    this->m_audio_binaural_isSet = true;
}

qint32
SWGSSBModSettings::getAudioFlipChannels() {
    return audio_flip_channels;
}
void
SWGSSBModSettings::setAudioFlipChannels(qint32 audio_flip_channels) {
    this->audio_flip_channels = audio_flip_channels;
    this->m_audio_flip_channels_isSet = true;
}

qint32
SWGSSBModSettings::getDsb() {
    return dsb;
}
void
SWGSSBModSettings::setDsb(qint32 dsb) {
    this->dsb = dsb;
    this->m_dsb_isSet = true;
}

qint32
SWGSSBModSettings::getAudioMute() {
    return audio_mute;
}
void
SWGSSBModSettings::setAudioMute(qint32 audio_mute) {
    this->audio_mute = audio_mute;
    this->m_audio_mute_isSet = true;
}

qint32
SWGSSBModSettings::getPlayLoop() {
    return play_loop;
}
void
SWGSSBModSettings::setPlayLoop(qint32 play_loop) {
    this->play_loop = play_loop;
    this->m_play_loop_isSet = true;
}

qint32
SWGSSBModSettings::getAgc() {
    return agc;
}
void
SWGSSBModSettings::setAgc(qint32 agc) {
    this->agc = agc;
    this->m_agc_isSet = true;
}

qint32
SWGSSBModSettings::getRgbColor() {
    return rgb_color;
}
void
SWGSSBModSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGSSBModSettings::getTitle() {
    return title;
}
void
SWGSSBModSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGSSBModSettings::getAudioDeviceName() {
    return audio_device_name;
}
void
SWGSSBModSettings::setAudioDeviceName(QString* audio_device_name) {
    this->audio_device_name = audio_device_name;
    this->m_audio_device_name_isSet = true;
}

qint32
SWGSSBModSettings::getModAfInput() {
    return mod_af_input;
}
void
SWGSSBModSettings::setModAfInput(qint32 mod_af_input) {
    this->mod_af_input = mod_af_input;
    this->m_mod_af_input_isSet = true;
}

qint32
SWGSSBModSettings::getStreamIndex() {
    return stream_index;
}
void
SWGSSBModSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGSSBModSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGSSBModSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGSSBModSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGSSBModSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGSSBModSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGSSBModSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGSSBModSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGSSBModSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGSSBModSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGSSBModSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}

SWGCWKeyerSettings*
SWGSSBModSettings::getCwKeyer() {
    return cw_keyer;
}
void
SWGSSBModSettings::setCwKeyer(SWGCWKeyerSettings* cw_keyer) {
    this->cw_keyer = cw_keyer;
    this->m_cw_keyer_isSet = true;
}


bool
SWGSSBModSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_low_cutoff_isSet){
            isObjectUpdated = true; break;
        }
        if(m_usb_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tone_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_volume_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_span_log2_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_binaural_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_flip_channels_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dsb_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_mute_isSet){
            isObjectUpdated = true; break;
        }
        if(m_play_loop_isSet){
            isObjectUpdated = true; break;
        }
        if(m_agc_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(audio_device_name && *audio_device_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_mod_af_input_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
        if(cw_keyer && cw_keyer->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

