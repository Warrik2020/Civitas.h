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
        void hasBarrel(bool value) const { WriteField<bool>("hasBarrel", value); }
        bool hasReceiver() const { return ReadField<bool>("hasReceiver"); }
        void hasReceiver(bool value) const { WriteField<bool>("hasReceiver", value); }
        bool hasStock() const { return ReadField<bool>("hasStock"); }
        void hasStock(bool value) const { WriteField<bool>("hasStock", value); }
        bool hasPole() const { return ReadField<bool>("hasPole"); }
        void hasPole(bool value) const { WriteField<bool>("hasPole", value); }
        bool hasGrip() const { return ReadField<bool>("hasGrip"); }
        void hasGrip(bool value) const { WriteField<bool>("hasGrip", value); }
        bool hasLock() const { return ReadField<bool>("hasLock"); }
        void hasLock(bool value) const { WriteField<bool>("hasLock", value); }
        bool hasTrigger() const { return ReadField<bool>("hasTrigger"); }
        void hasTrigger(bool value) const { WriteField<bool>("hasTrigger", value); }
        bool hasCrank() const { return ReadField<bool>("hasCrank"); }
        void hasCrank(bool value) const { WriteField<bool>("hasCrank", value); }
        bool hasSightPart() const { return ReadField<bool>("hasSightPart"); }
        void hasSightPart(bool value) const { WriteField<bool>("hasSightPart", value); }
        bool hasBipod() const { return ReadField<bool>("hasBipod"); }
        void hasBipod(bool value) const { WriteField<bool>("hasBipod", value); }
        bool hasJacket() const { return ReadField<bool>("hasJacket"); }
        void hasJacket(bool value) const { WriteField<bool>("hasJacket", value); }
        bool hasMagazinePart() const { return ReadField<bool>("hasMagazinePart"); }
        void hasMagazinePart(bool value) const { WriteField<bool>("hasMagazinePart", value); }
        bool hasDrumPart() const { return ReadField<bool>("hasDrumPart"); }
        void hasDrumPart(bool value) const { WriteField<bool>("hasDrumPart", value); }
        bool hasHopperPart() const { return ReadField<bool>("hasHopperPart"); }
        void hasHopperPart(bool value) const { WriteField<bool>("hasHopperPart", value); }
        bool hasCylinderPart() const { return ReadField<bool>("hasCylinderPart"); }
        void hasCylinderPart(bool value) const { WriteField<bool>("hasCylinderPart", value); }
        bool bullpup() const { return ReadField<bool>("bullpup"); }
        void bullpup(bool value) const { WriteField<bool>("bullpup", value); }
        bool hasBolt() const { return ReadField<bool>("hasBolt"); }
        void hasBolt(bool value) const { WriteField<bool>("hasBolt", value); }
        bool hasGasSystem() const { return ReadField<bool>("hasGasSystem"); }
        void hasGasSystem(bool value) const { WriteField<bool>("hasGasSystem", value); }
        bool hasHammer() const { return ReadField<bool>("hasHammer"); }
        void hasHammer(bool value) const { WriteField<bool>("hasHammer", value); }
        bool hasLever() const { return ReadField<bool>("hasLever"); }
        void hasLever(bool value) const { WriteField<bool>("hasLever", value); }
        bool hasDustCover() const { return ReadField<bool>("hasDustCover"); }
        void hasDustCover(bool value) const { WriteField<bool>("hasDustCover", value); }
        float boltLength() const { return ReadField<float>("boltLength"); }
        void boltLength(float value) const { WriteField<float>("boltLength", value); }
        int barrelCount() const { return ReadField<int>("barrelCount"); }
        void barrelCount(int value) const { WriteField<int>("barrelCount", value); }
        int partCount() const { return ReadField<int>("partCount"); }
        void partCount(int value) const { WriteField<int>("partCount", value); }
        float barrelLength() const { return ReadField<float>("barrelLength"); }
        void barrelLength(float value) const { WriteField<float>("barrelLength", value); }
        float barrelOuterDia() const { return ReadField<float>("barrelOuterDia"); }
        void barrelOuterDia(float value) const { WriteField<float>("barrelOuterDia", value); }
        float barrelX0() const { return ReadField<float>("barrelX0"); }
        void barrelX0(float value) const { WriteField<float>("barrelX0", value); }
        float barrelX1() const { return ReadField<float>("barrelX1"); }
        void barrelX1(float value) const { WriteField<float>("barrelX1", value); }
        float barrelY0() const { return ReadField<float>("barrelY0"); }
        void barrelY0(float value) const { WriteField<float>("barrelY0", value); }
        float barrelY1() const { return ReadField<float>("barrelY1"); }
        void barrelY1(float value) const { WriteField<float>("barrelY1", value); }
        int barrelMaterial() const { return ReadField<int>("barrelMaterial"); }
        void barrelMaterial(int value) const { WriteField<int>("barrelMaterial", value); }
        void* receiverMin() const { return ReadField<void*>("receiverMin"); }
        void receiverMin(void* value) const { WriteField<void*>("receiverMin", value); }
        void* receiverMax() const { return ReadField<void*>("receiverMax"); }
        void receiverMax(void* value) const { WriteField<void*>("receiverMax", value); }
        float stockLength() const { return ReadField<float>("stockLength"); }
        void stockLength(float value) const { WriteField<float>("stockLength", value); }
        float overallLength() const { return ReadField<float>("overallLength"); }
        void overallLength(float value) const { WriteField<float>("overallLength", value); }
        float overallHeight() const { return ReadField<float>("overallHeight"); }
        void overallHeight(float value) const { WriteField<float>("overallHeight", value); }
        float weightKg() const { return ReadField<float>("weightKg"); }
        void weightKg(float value) const { WriteField<float>("weightKg", value); }
        float lateralMm() const { return ReadField<float>("lateralMm"); }
        void lateralMm(float value) const { WriteField<float>("lateralMm", value); }
        int lateralPart() const { return ReadField<int>("lateralPart"); }
        void lateralPart(int value) const { WriteField<int>("lateralPart", value); }
        float lateralPartMm() const { return ReadField<float>("lateralPartMm"); }
        void lateralPartMm(float value) const { WriteField<float>("lateralPartMm", value); }
        float magazineArea() const { return ReadField<float>("magazineArea"); }
        void magazineArea(float value) const { WriteField<float>("magazineArea", value); }
        float magazineWidth() const { return ReadField<float>("magazineWidth"); }
        void magazineWidth(float value) const { WriteField<float>("magazineWidth", value); }
        float magazineHeight() const { return ReadField<float>("magazineHeight"); }
        void magazineHeight(float value) const { WriteField<float>("magazineHeight", value); }
        float drumArea() const { return ReadField<float>("drumArea"); }
        void drumArea(float value) const { WriteField<float>("drumArea", value); }
        float hopperArea() const { return ReadField<float>("hopperArea"); }
        void hopperArea(float value) const { WriteField<float>("hopperArea", value); }
        float hopperMinY() const { return ReadField<float>("hopperMinY"); }
        void hopperMinY(float value) const { WriteField<float>("hopperMinY", value); }
        float cylinderDia() const { return ReadField<float>("cylinderDia"); }
        void cylinderDia(float value) const { WriteField<float>("cylinderDia", value); }
        float tubeLength() const { return ReadField<float>("tubeLength"); }
        void tubeLength(float value) const { WriteField<float>("tubeLength", value); }
        void* gripCentre() const { return ReadField<void*>("gripCentre"); }
        void gripCentre(void* value) const { WriteField<void*>("gripCentre", value); }
        void* magazineCentre() const { return ReadField<void*>("magazineCentre"); }
        void magazineCentre(void* value) const { WriteField<void*>("magazineCentre", value); }
        bool stockGrip() const { return ReadField<bool>("stockGrip"); }
        void stockGrip(bool value) const { WriteField<bool>("stockGrip", value); }
        int strayGrips() const { return ReadField<int>("strayGrips"); }
        void strayGrips(int value) const { WriteField<int>("strayGrips", value); }
    };
}
