#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class DoctrineProfile : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DoctrineProfile(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "DoctrineProfile") {}
    public:
        int foot() const { return ReadField<int>("foot"); }
        void SetFoot(int value) const { WriteField<int>("foot", value); }
        int horse() const { return ReadField<int>("horse"); }
        void SetHorse(int value) const { WriteField<int>("horse", value); }
        int armour() const { return ReadField<int>("armour"); }
        void SetArmour(int value) const { WriteField<int>("armour", value); }
        int transport() const { return ReadField<int>("transport"); }
        void SetTransport(int value) const { WriteField<int>("transport", value); }
        int guns() const { return ReadField<int>("guns"); }
        void SetGuns(int value) const { WriteField<int>("guns", value); }
        uint8_t lineRanksFoot() const { return ReadField<uint8_t>("lineRanksFoot"); }
        void SetLineRanksFoot(uint8_t value) const { WriteField<uint8_t>("lineRanksFoot", value); }
        uint8_t skirmishWaves() const { return ReadField<uint8_t>("skirmishWaves"); }
        void SetSkirmishWaves(uint8_t value) const { WriteField<uint8_t>("skirmishWaves", value); }
        float squadJitter() const { return ReadField<float>("squadJitter"); }
        void SetSquadJitter(float value) const { WriteField<float>("squadJitter", value); }
        float frontWaviness() const { return ReadField<float>("frontWaviness"); }
        void SetFrontWaviness(float value) const { WriteField<float>("frontWaviness", value); }
        float deployJitter() const { return ReadField<float>("deployJitter"); }
        void SetDeployJitter(float value) const { WriteField<float>("deployJitter", value); }
        float echelonGapTiles() const { return ReadField<float>("echelonGapTiles"); }
        void SetEchelonGapTiles(float value) const { WriteField<float>("echelonGapTiles", value); }
        float gunBacksetTiles() const { return ReadField<float>("gunBacksetTiles"); }
        void SetGunBacksetTiles(float value) const { WriteField<float>("gunBacksetTiles", value); }
        float reserveFraction() const { return ReadField<float>("reserveFraction"); }
        void SetReserveFraction(float value) const { WriteField<float>("reserveFraction", value); }
        float reserveBacksetTiles() const { return ReadField<float>("reserveBacksetTiles"); }
        void SetReserveBacksetTiles(float value) const { WriteField<float>("reserveBacksetTiles", value); }
        bool seeksCover() const { return ReadField<bool>("seeksCover"); }
        void SetSeeksCover(bool value) const { WriteField<bool>("seeksCover", value); }
        bool bounds() const { return ReadField<bool>("bounds"); }
        void SetBounds(bool value) const { WriteField<bool>("bounds", value); }
        bool goesProne() const { return ReadField<bool>("goesProne"); }
        void SetGoesProne(bool value) const { WriteField<bool>("goesProne", value); }
        bool digsByDefault() const { return ReadField<bool>("digsByDefault"); }
        void SetDigsByDefault(bool value) const { WriteField<bool>("digsByDefault", value); }
        bool sections() const { return ReadField<bool>("sections"); }
        void SetSections(bool value) const { WriteField<bool>("sections", value); }
        float suppressionGain() const { return ReadField<float>("suppressionGain"); }
        void SetSuppressionGain(float value) const { WriteField<float>("suppressionGain", value); }
    };
}
