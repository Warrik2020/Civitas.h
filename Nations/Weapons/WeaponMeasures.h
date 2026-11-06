#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponMeasures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponMeasures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponMeasures") {}
    public:
        bool hasBarrel() const { return ReadField<bool>("hasBarrel"); }
        void SetHasBarrel(bool value) const { WriteField<bool>("hasBarrel", value); }
        bool hasReceiver() const { return ReadField<bool>("hasReceiver"); }
        void SetHasReceiver(bool value) const { WriteField<bool>("hasReceiver", value); }
        bool hasStock() const { return ReadField<bool>("hasStock"); }
        void SetHasStock(bool value) const { WriteField<bool>("hasStock", value); }
        bool hasPole() const { return ReadField<bool>("hasPole"); }
        void SetHasPole(bool value) const { WriteField<bool>("hasPole", value); }
        bool hasGrip() const { return ReadField<bool>("hasGrip"); }
        void SetHasGrip(bool value) const { WriteField<bool>("hasGrip", value); }
        bool hasLock() const { return ReadField<bool>("hasLock"); }
        void SetHasLock(bool value) const { WriteField<bool>("hasLock", value); }
        bool hasTrigger() const { return ReadField<bool>("hasTrigger"); }
        void SetHasTrigger(bool value) const { WriteField<bool>("hasTrigger", value); }
        bool hasCrank() const { return ReadField<bool>("hasCrank"); }
        void SetHasCrank(bool value) const { WriteField<bool>("hasCrank", value); }
        bool hasSightPart() const { return ReadField<bool>("hasSightPart"); }
        void SetHasSightPart(bool value) const { WriteField<bool>("hasSightPart", value); }
        bool hasBipod() const { return ReadField<bool>("hasBipod"); }
        void SetHasBipod(bool value) const { WriteField<bool>("hasBipod", value); }
        bool hasJacket() const { return ReadField<bool>("hasJacket"); }
        void SetHasJacket(bool value) const { WriteField<bool>("hasJacket", value); }
        bool hasMagazinePart() const { return ReadField<bool>("hasMagazinePart"); }
        void SetHasMagazinePart(bool value) const { WriteField<bool>("hasMagazinePart", value); }
        bool hasDrumPart() const { return ReadField<bool>("hasDrumPart"); }
        void SetHasDrumPart(bool value) const { WriteField<bool>("hasDrumPart", value); }
        bool hasHopperPart() const { return ReadField<bool>("hasHopperPart"); }
        void SetHasHopperPart(bool value) const { WriteField<bool>("hasHopperPart", value); }
        bool hasCylinderPart() const { return ReadField<bool>("hasCylinderPart"); }
        void SetHasCylinderPart(bool value) const { WriteField<bool>("hasCylinderPart", value); }
        bool bullpup() const { return ReadField<bool>("bullpup"); }
        void SetBullpup(bool value) const { WriteField<bool>("bullpup", value); }
        bool hasBolt() const { return ReadField<bool>("hasBolt"); }
        void SetHasBolt(bool value) const { WriteField<bool>("hasBolt", value); }
        bool hasGasSystem() const { return ReadField<bool>("hasGasSystem"); }
        void SetHasGasSystem(bool value) const { WriteField<bool>("hasGasSystem", value); }
        bool hasHammer() const { return ReadField<bool>("hasHammer"); }
        void SetHasHammer(bool value) const { WriteField<bool>("hasHammer", value); }
        bool hasLever() const { return ReadField<bool>("hasLever"); }
        void SetHasLever(bool value) const { WriteField<bool>("hasLever", value); }
        bool hasDustCover() const { return ReadField<bool>("hasDustCover"); }
        void SetHasDustCover(bool value) const { WriteField<bool>("hasDustCover", value); }
        float boltLength() const { return ReadField<float>("boltLength"); }
        void SetBoltLength(float value) const { WriteField<float>("boltLength", value); }
        int barrelCount() const { return ReadField<int>("barrelCount"); }
        void SetBarrelCount(int value) const { WriteField<int>("barrelCount", value); }
        int partCount() const { return ReadField<int>("partCount"); }
        void SetPartCount(int value) const { WriteField<int>("partCount", value); }
        float barrelLength() const { return ReadField<float>("barrelLength"); }
        void SetBarrelLength(float value) const { WriteField<float>("barrelLength", value); }
        float barrelOuterDia() const { return ReadField<float>("barrelOuterDia"); }
        void SetBarrelOuterDia(float value) const { WriteField<float>("barrelOuterDia", value); }
        float barrelX0() const { return ReadField<float>("barrelX0"); }
        void SetBarrelX0(float value) const { WriteField<float>("barrelX0", value); }
        float barrelX1() const { return ReadField<float>("barrelX1"); }
        void SetBarrelX1(float value) const { WriteField<float>("barrelX1", value); }
        float barrelY0() const { return ReadField<float>("barrelY0"); }
        void SetBarrelY0(float value) const { WriteField<float>("barrelY0", value); }
        float barrelY1() const { return ReadField<float>("barrelY1"); }
        void SetBarrelY1(float value) const { WriteField<float>("barrelY1", value); }
        int barrelMaterial() const { return ReadField<int>("barrelMaterial"); }
        void SetBarrelMaterial(int value) const { WriteField<int>("barrelMaterial", value); }
        void* receiverMin() const { return ReadField<void*>("receiverMin"); }
        void SetReceiverMin(void* value) const { WriteField<void*>("receiverMin", value); }
        void* receiverMax() const { return ReadField<void*>("receiverMax"); }
        void SetReceiverMax(void* value) const { WriteField<void*>("receiverMax", value); }
        float stockLength() const { return ReadField<float>("stockLength"); }
        void SetStockLength(float value) const { WriteField<float>("stockLength", value); }
        float overallLength() const { return ReadField<float>("overallLength"); }
        void SetOverallLength(float value) const { WriteField<float>("overallLength", value); }
        float overallHeight() const { return ReadField<float>("overallHeight"); }
        void SetOverallHeight(float value) const { WriteField<float>("overallHeight", value); }
        float weightKg() const { return ReadField<float>("weightKg"); }
        void SetWeightKg(float value) const { WriteField<float>("weightKg", value); }
        float lateralMm() const { return ReadField<float>("lateralMm"); }
        void SetLateralMm(float value) const { WriteField<float>("lateralMm", value); }
        int lateralPart() const { return ReadField<int>("lateralPart"); }
        void SetLateralPart(int value) const { WriteField<int>("lateralPart", value); }
        float lateralPartMm() const { return ReadField<float>("lateralPartMm"); }
        void SetLateralPartMm(float value) const { WriteField<float>("lateralPartMm", value); }
        float magazineArea() const { return ReadField<float>("magazineArea"); }
        void SetMagazineArea(float value) const { WriteField<float>("magazineArea", value); }
        float magazineWidth() const { return ReadField<float>("magazineWidth"); }
        void SetMagazineWidth(float value) const { WriteField<float>("magazineWidth", value); }
        float magazineHeight() const { return ReadField<float>("magazineHeight"); }
        void SetMagazineHeight(float value) const { WriteField<float>("magazineHeight", value); }
        float drumArea() const { return ReadField<float>("drumArea"); }
        void SetDrumArea(float value) const { WriteField<float>("drumArea", value); }
        float hopperArea() const { return ReadField<float>("hopperArea"); }
        void SetHopperArea(float value) const { WriteField<float>("hopperArea", value); }
        float hopperMinY() const { return ReadField<float>("hopperMinY"); }
        void SetHopperMinY(float value) const { WriteField<float>("hopperMinY", value); }
        float cylinderDia() const { return ReadField<float>("cylinderDia"); }
        void SetCylinderDia(float value) const { WriteField<float>("cylinderDia", value); }
        float tubeLength() const { return ReadField<float>("tubeLength"); }
        void SetTubeLength(float value) const { WriteField<float>("tubeLength", value); }
        void* gripCentre() const { return ReadField<void*>("gripCentre"); }
        void SetGripCentre(void* value) const { WriteField<void*>("gripCentre", value); }
        void* magazineCentre() const { return ReadField<void*>("magazineCentre"); }
        void SetMagazineCentre(void* value) const { WriteField<void*>("magazineCentre", value); }
        bool stockGrip() const { return ReadField<bool>("stockGrip"); }
        void SetStockGrip(bool value) const { WriteField<bool>("stockGrip", value); }
        int strayGrips() const { return ReadField<int>("strayGrips"); }
        void SetStrayGrips(int value) const { WriteField<int>("strayGrips", value); }
    };
}
