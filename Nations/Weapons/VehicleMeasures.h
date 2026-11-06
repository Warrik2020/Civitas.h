#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class VehicleMeasures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VehicleMeasures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "VehicleMeasures") {}
    public:
        int partCount() const { return ReadField<int>("partCount"); }
        void partCount(int value) const { WriteField<int>("partCount", value); }
        int reactiveBlocks() const { return ReadField<int>("reactiveBlocks"); }
        void reactiveBlocks(int value) const { WriteField<int>("reactiveBlocks", value); }
        int roadWheels() const { return ReadField<int>("roadWheels"); }
        void roadWheels(int value) const { WriteField<int>("roadWheels", value); }
        bool hasHull() const { return ReadField<bool>("hasHull"); }
        void hasHull(bool value) const { WriteField<bool>("hasHull", value); }
        bool hasTurret() const { return ReadField<bool>("hasTurret"); }
        void hasTurret(bool value) const { WriteField<bool>("hasTurret", value); }
        bool hasCupola() const { return ReadField<bool>("hasCupola"); }
        void hasCupola(bool value) const { WriteField<bool>("hasCupola", value); }
        bool hasBarrel() const { return ReadField<bool>("hasBarrel"); }
        void hasBarrel(bool value) const { WriteField<bool>("hasBarrel", value); }
        bool hasMantlet() const { return ReadField<bool>("hasMantlet"); }
        void hasMantlet(bool value) const { WriteField<bool>("hasMantlet", value); }
        bool hasTrack() const { return ReadField<bool>("hasTrack"); }
        void hasTrack(bool value) const { WriteField<bool>("hasTrack", value); }
        bool hasEngine() const { return ReadField<bool>("hasEngine"); }
        void hasEngine(bool value) const { WriteField<bool>("hasEngine", value); }
        bool hasSkirt() const { return ReadField<bool>("hasSkirt"); }
        void hasSkirt(bool value) const { WriteField<bool>("hasSkirt", value); }
        float hullArea() const { return ReadField<float>("hullArea"); }
        void hullArea(float value) const { WriteField<float>("hullArea", value); }
        float turretArea() const { return ReadField<float>("turretArea"); }
        void turretArea(float value) const { WriteField<float>("turretArea", value); }
        float deckArea() const { return ReadField<float>("deckArea"); }
        void deckArea(float value) const { WriteField<float>("deckArea", value); }
        float trackLen() const { return ReadField<float>("trackLen"); }
        void trackLen(float value) const { WriteField<float>("trackLen", value); }
        float trackHeight() const { return ReadField<float>("trackHeight"); }
        void trackHeight(float value) const { WriteField<float>("trackHeight", value); }
        float barrelLen() const { return ReadField<float>("barrelLen"); }
        void barrelLen(float value) const { WriteField<float>("barrelLen", value); }
        float barrelOuterDia() const { return ReadField<float>("barrelOuterDia"); }
        void barrelOuterDia(float value) const { WriteField<float>("barrelOuterDia", value); }
        float frontalMm() const { return ReadField<float>("frontalMm"); }
        void frontalMm(float value) const { WriteField<float>("frontalMm", value); }
        float armourKg() const { return ReadField<float>("armourKg"); }
        void armourKg(float value) const { WriteField<float>("armourKg", value); }
        float barrelKg() const { return ReadField<float>("barrelKg"); }
        void barrelKg(float value) const { WriteField<float>("barrelKg", value); }
        float turretRingMm() const { return ReadField<float>("turretRingMm"); }
        void turretRingMm(float value) const { WriteField<float>("turretRingMm", value); }
        void* hullMin() const { return ReadField<void*>("hullMin"); }
        void hullMin(void* value) const { WriteField<void*>("hullMin", value); }
        void* hullMax() const { return ReadField<void*>("hullMax"); }
        void hullMax(void* value) const { WriteField<void*>("hullMax", value); }
        void* turretMin() const { return ReadField<void*>("turretMin"); }
        void turretMin(void* value) const { WriteField<void*>("turretMin", value); }
        void* turretMax() const { return ReadField<void*>("turretMax"); }
        void turretMax(void* value) const { WriteField<void*>("turretMax", value); }
        void* deckMin() const { return ReadField<void*>("deckMin"); }
        void deckMin(void* value) const { WriteField<void*>("deckMin", value); }
        void* deckMax() const { return ReadField<void*>("deckMax"); }
        void deckMax(void* value) const { WriteField<void*>("deckMax", value); }
        bool barrelAttached() const { return ReadField<bool>("barrelAttached"); }
        void barrelAttached(bool value) const { WriteField<bool>("barrelAttached", value); }
        bool engineInsideHull() const { return ReadField<bool>("engineInsideHull"); }
        void engineInsideHull(bool value) const { WriteField<bool>("engineInsideHull", value); }
        int wheels() const { return ReadField<int>("wheels"); }
        void wheels(int value) const { WriteField<int>("wheels", value); }
        bool hasWheel() const { return ReadField<bool>("hasWheel"); }
        void hasWheel(bool value) const { WriteField<bool>("hasWheel", value); }
        bool hasBed() const { return ReadField<bool>("hasBed"); }
        void hasBed(bool value) const { WriteField<bool>("hasBed", value); }
        float wheelFootprint() const { return ReadField<float>("wheelFootprint"); }
        void wheelFootprint(float value) const { WriteField<float>("wheelFootprint", value); }
        float wheelKg() const { return ReadField<float>("wheelKg"); }
        void wheelKg(float value) const { WriteField<float>("wheelKg", value); }
        float wheelDia() const { return ReadField<float>("wheelDia"); }
        void wheelDia(float value) const { WriteField<float>("wheelDia", value); }
        float bedArea() const { return ReadField<float>("bedArea"); }
        void bedArea(float value) const { WriteField<float>("bedArea", value); }
    };
}
