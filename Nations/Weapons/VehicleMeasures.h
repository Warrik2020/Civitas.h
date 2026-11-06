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
        void SetPartCount(int value) const { WriteField<int>("partCount", value); }
        int reactiveBlocks() const { return ReadField<int>("reactiveBlocks"); }
        void SetReactiveBlocks(int value) const { WriteField<int>("reactiveBlocks", value); }
        int roadWheels() const { return ReadField<int>("roadWheels"); }
        void SetRoadWheels(int value) const { WriteField<int>("roadWheels", value); }
        bool hasHull() const { return ReadField<bool>("hasHull"); }
        void SetHasHull(bool value) const { WriteField<bool>("hasHull", value); }
        bool hasTurret() const { return ReadField<bool>("hasTurret"); }
        void SetHasTurret(bool value) const { WriteField<bool>("hasTurret", value); }
        bool hasCupola() const { return ReadField<bool>("hasCupola"); }
        void SetHasCupola(bool value) const { WriteField<bool>("hasCupola", value); }
        bool hasBarrel() const { return ReadField<bool>("hasBarrel"); }
        void SetHasBarrel(bool value) const { WriteField<bool>("hasBarrel", value); }
        bool hasMantlet() const { return ReadField<bool>("hasMantlet"); }
        void SetHasMantlet(bool value) const { WriteField<bool>("hasMantlet", value); }
        bool hasTrack() const { return ReadField<bool>("hasTrack"); }
        void SetHasTrack(bool value) const { WriteField<bool>("hasTrack", value); }
        bool hasEngine() const { return ReadField<bool>("hasEngine"); }
        void SetHasEngine(bool value) const { WriteField<bool>("hasEngine", value); }
        bool hasSkirt() const { return ReadField<bool>("hasSkirt"); }
        void SetHasSkirt(bool value) const { WriteField<bool>("hasSkirt", value); }
        float hullArea() const { return ReadField<float>("hullArea"); }
        void SetHullArea(float value) const { WriteField<float>("hullArea", value); }
        float turretArea() const { return ReadField<float>("turretArea"); }
        void SetTurretArea(float value) const { WriteField<float>("turretArea", value); }
        float deckArea() const { return ReadField<float>("deckArea"); }
        void SetDeckArea(float value) const { WriteField<float>("deckArea", value); }
        float trackLen() const { return ReadField<float>("trackLen"); }
        void SetTrackLen(float value) const { WriteField<float>("trackLen", value); }
        float trackHeight() const { return ReadField<float>("trackHeight"); }
        void SetTrackHeight(float value) const { WriteField<float>("trackHeight", value); }
        float barrelLen() const { return ReadField<float>("barrelLen"); }
        void SetBarrelLen(float value) const { WriteField<float>("barrelLen", value); }
        float barrelOuterDia() const { return ReadField<float>("barrelOuterDia"); }
        void SetBarrelOuterDia(float value) const { WriteField<float>("barrelOuterDia", value); }
        float frontalMm() const { return ReadField<float>("frontalMm"); }
        void SetFrontalMm(float value) const { WriteField<float>("frontalMm", value); }
        float armourKg() const { return ReadField<float>("armourKg"); }
        void SetArmourKg(float value) const { WriteField<float>("armourKg", value); }
        float barrelKg() const { return ReadField<float>("barrelKg"); }
        void SetBarrelKg(float value) const { WriteField<float>("barrelKg", value); }
        float turretRingMm() const { return ReadField<float>("turretRingMm"); }
        void SetTurretRingMm(float value) const { WriteField<float>("turretRingMm", value); }
        void* hullMin() const { return ReadField<void*>("hullMin"); }
        void SetHullMin(void* value) const { WriteField<void*>("hullMin", value); }
        void* hullMax() const { return ReadField<void*>("hullMax"); }
        void SetHullMax(void* value) const { WriteField<void*>("hullMax", value); }
        void* turretMin() const { return ReadField<void*>("turretMin"); }
        void SetTurretMin(void* value) const { WriteField<void*>("turretMin", value); }
        void* turretMax() const { return ReadField<void*>("turretMax"); }
        void SetTurretMax(void* value) const { WriteField<void*>("turretMax", value); }
        void* deckMin() const { return ReadField<void*>("deckMin"); }
        void SetDeckMin(void* value) const { WriteField<void*>("deckMin", value); }
        void* deckMax() const { return ReadField<void*>("deckMax"); }
        void SetDeckMax(void* value) const { WriteField<void*>("deckMax", value); }
        bool barrelAttached() const { return ReadField<bool>("barrelAttached"); }
        void SetBarrelAttached(bool value) const { WriteField<bool>("barrelAttached", value); }
        bool engineInsideHull() const { return ReadField<bool>("engineInsideHull"); }
        void SetEngineInsideHull(bool value) const { WriteField<bool>("engineInsideHull", value); }
        int wheels() const { return ReadField<int>("wheels"); }
        void SetWheels(int value) const { WriteField<int>("wheels", value); }
        bool hasWheel() const { return ReadField<bool>("hasWheel"); }
        void SetHasWheel(bool value) const { WriteField<bool>("hasWheel", value); }
        bool hasBed() const { return ReadField<bool>("hasBed"); }
        void SetHasBed(bool value) const { WriteField<bool>("hasBed", value); }
        float wheelFootprint() const { return ReadField<float>("wheelFootprint"); }
        void SetWheelFootprint(float value) const { WriteField<float>("wheelFootprint", value); }
        float wheelKg() const { return ReadField<float>("wheelKg"); }
        void SetWheelKg(float value) const { WriteField<float>("wheelKg", value); }
        float wheelDia() const { return ReadField<float>("wheelDia"); }
        void SetWheelDia(float value) const { WriteField<float>("wheelDia", value); }
        float bedArea() const { return ReadField<float>("bedArea"); }
        void SetBedArea(float value) const { WriteField<float>("bedArea", value); }
    };
}
