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
        void foot(int value) const { WriteField<int>("foot", value); }
        int horse() const { return ReadField<int>("horse"); }
        void horse(int value) const { WriteField<int>("horse", value); }
        int armour() const { return ReadField<int>("armour"); }
        void armour(int value) const { WriteField<int>("armour", value); }
        int transport() const { return ReadField<int>("transport"); }
        void transport(int value) const { WriteField<int>("transport", value); }
        int guns() const { return ReadField<int>("guns"); }
        void guns(int value) const { WriteField<int>("guns", value); }
        uint8_t lineRanksFoot() const { return ReadField<uint8_t>("lineRanksFoot"); }
        void lineRanksFoot(uint8_t value) const { WriteField<uint8_t>("lineRanksFoot", value); }
        uint8_t skirmishWaves() const { return ReadField<uint8_t>("skirmishWaves"); }
        void skirmishWaves(uint8_t value) const { WriteField<uint8_t>("skirmishWaves", value); }
        float squadJitter() const { return ReadField<float>("squadJitter"); }
        void squadJitter(float value) const { WriteField<float>("squadJitter", value); }
        float frontWaviness() const { return ReadField<float>("frontWaviness"); }
        void frontWaviness(float value) const { WriteField<float>("frontWaviness", value); }
        float deployJitter() const { return ReadField<float>("deployJitter"); }
        void deployJitter(float value) const { WriteField<float>("deployJitter", value); }
        float echelonGapTiles() const { return ReadField<float>("echelonGapTiles"); }
        void echelonGapTiles(float value) const { WriteField<float>("echelonGapTiles", value); }
        float gunBacksetTiles() const { return ReadField<float>("gunBacksetTiles"); }
        void gunBacksetTiles(float value) const { WriteField<float>("gunBacksetTiles", value); }
        float reserveFraction() const { return ReadField<float>("reserveFraction"); }
        void reserveFraction(float value) const { WriteField<float>("reserveFraction", value); }
        float reserveBacksetTiles() const { return ReadField<float>("reserveBacksetTiles"); }
        void reserveBacksetTiles(float value) const { WriteField<float>("reserveBacksetTiles", value); }
        bool seeksCover() const { return ReadField<bool>("seeksCover"); }
        void seeksCover(bool value) const { WriteField<bool>("seeksCover", value); }
        bool bounds() const { return ReadField<bool>("bounds"); }
        void bounds(bool value) const { WriteField<bool>("bounds", value); }
        bool goesProne() const { return ReadField<bool>("goesProne"); }
        void goesProne(bool value) const { WriteField<bool>("goesProne", value); }
        bool digsByDefault() const { return ReadField<bool>("digsByDefault"); }
        void digsByDefault(bool value) const { WriteField<bool>("digsByDefault", value); }
        bool sections() const { return ReadField<bool>("sections"); }
        void sections(bool value) const { WriteField<bool>("sections", value); }
        float suppressionGain() const { return ReadField<float>("suppressionGain"); }
        void suppressionGain(float value) const { WriteField<float>("suppressionGain", value); }
    };
}
