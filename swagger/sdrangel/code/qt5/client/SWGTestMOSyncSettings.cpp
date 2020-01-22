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


#include "SWGTestMOSyncSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGTestMOSyncSettings::SWGTestMOSyncSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTestMOSyncSettings::SWGTestMOSyncSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    sample_rate = 0L;
    m_sample_rate_isSet = false;
    log2_interp = 0;
    m_log2_interp_isSet = false;
    fc_pos_tx = 0;
    m_fc_pos_tx_isSet = false;
}

SWGTestMOSyncSettings::~SWGTestMOSyncSettings() {
    this->cleanup();
}

void
SWGTestMOSyncSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    sample_rate = 0L;
    m_sample_rate_isSet = false;
    log2_interp = 0;
    m_log2_interp_isSet = false;
    fc_pos_tx = 0;
    m_fc_pos_tx_isSet = false;
}

void
SWGTestMOSyncSettings::cleanup() {




}

SWGTestMOSyncSettings*
SWGTestMOSyncSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTestMOSyncSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&sample_rate, pJson["sampleRate"], "qint64", "");
    
    ::SWGSDRangel::setValue(&log2_interp, pJson["log2Interp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fc_pos_tx, pJson["fcPosTx"], "qint32", "");
    
}

QString
SWGTestMOSyncSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGTestMOSyncSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_sample_rate_isSet){
        obj->insert("sampleRate", QJsonValue(sample_rate));
    }
    if(m_log2_interp_isSet){
        obj->insert("log2Interp", QJsonValue(log2_interp));
    }
    if(m_fc_pos_tx_isSet){
        obj->insert("fcPosTx", QJsonValue(fc_pos_tx));
    }

    return obj;
}

qint64
SWGTestMOSyncSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGTestMOSyncSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint64
SWGTestMOSyncSettings::getSampleRate() {
    return sample_rate;
}
void
SWGTestMOSyncSettings::setSampleRate(qint64 sample_rate) {
    this->sample_rate = sample_rate;
    this->m_sample_rate_isSet = true;
}

qint32
SWGTestMOSyncSettings::getLog2Interp() {
    return log2_interp;
}
void
SWGTestMOSyncSettings::setLog2Interp(qint32 log2_interp) {
    this->log2_interp = log2_interp;
    this->m_log2_interp_isSet = true;
}

qint32
SWGTestMOSyncSettings::getFcPosTx() {
    return fc_pos_tx;
}
void
SWGTestMOSyncSettings::setFcPosTx(qint32 fc_pos_tx) {
    this->fc_pos_tx = fc_pos_tx;
    this->m_fc_pos_tx_isSet = true;
}


bool
SWGTestMOSyncSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_interp_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fc_pos_tx_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

