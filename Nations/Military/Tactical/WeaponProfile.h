#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class WeaponProfile : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponProfile(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "WeaponProfile") {}
    public:
        void* Melee(int era) const { void* __callArgs[] = { &era }; return CallStatic("Melee", __callArgs, 1); }
        int era() const { return ReadField<int>("era"); }
        void era(int value) const { WriteField<int>("era", value); }
        int age() const { return ReadField<int>("age"); }
        void age(int value) const { WriteField<int>("age", value); }
        float rangeTiles() const { return ReadField<float>("rangeTiles"); }
        void rangeTiles(float value) const { WriteField<float>("rangeTiles", value); }
        float reloadSeconds() const { return ReadField<float>("reloadSeconds"); }
        void reloadSeconds(float value) const { WriteField<float>("reloadSeconds", value); }
        float hitBase() const { return ReadField<float>("hitBase"); }
        void hitBase(float value) const { WriteField<float>("hitBase", value); }
        bool volleys() const { return ReadField<bool>("volleys"); }
        void volleys(bool value) const { WriteField<bool>("volleys", value); }
        float meleeHit() const { return ReadField<float>("meleeHit"); }
        void meleeHit(float value) const { WriteField<float>("meleeHit", value); }
        float meleeReach() const { return ReadField<float>("meleeReach"); }
        void meleeReach(float value) const { WriteField<float>("meleeReach", value); }
        float armour() const { return ReadField<float>("armour"); }
        void armour(float value) const { WriteField<float>("armour", value); }
        float armourMelee() const { return ReadField<float>("armourMelee"); }
        void armourMelee(float value) const { WriteField<float>("armourMelee", value); }
        float speedMul() const { return ReadField<float>("speedMul"); }
        void speedMul(float value) const { WriteField<float>("speedMul", value); }
        int machineGuns() const { return ReadField<int>("machineGuns"); }
        void machineGuns(int value) const { WriteField<int>("machineGuns", value); }
        float mgFireMul() const { return ReadField<float>("mgFireMul"); }
        void mgFireMul(float value) const { WriteField<float>("mgFireMul", value); }
        float tankHp() const { return ReadField<float>("tankHp"); }
        void tankHp(float value) const { WriteField<float>("tankHp", value); }
        float gunRangeTiles() const { return ReadField<float>("gunRangeTiles"); }
        void gunRangeTiles(float value) const { WriteField<float>("gunRangeTiles", value); }
        float gunReloadSeconds() const { return ReadField<float>("gunReloadSeconds"); }
        void gunReloadSeconds(float value) const { WriteField<float>("gunReloadSeconds", value); }
        float gunBlastTiles() const { return ReadField<float>("gunBlastTiles"); }
        void gunBlastTiles(float value) const { WriteField<float>("gunBlastTiles", value); }
        int gunMaxKills() const { return ReadField<int>("gunMaxKills"); }
        void gunMaxKills(int value) const { WriteField<int>("gunMaxKills", value); }
        bool canDigIn() const { return ReadField<bool>("canDigIn"); }
        void canDigIn(bool value) const { WriteField<bool>("canDigIn", value); }
        bool canSquare() const { return ReadField<bool>("canSquare"); }
        void canSquare(bool value) const { WriteField<bool>("canSquare", value); }
        float doctrineTier() const { return ReadField<float>("doctrineTier"); }
        void doctrineTier(float value) const { WriteField<float>("doctrineTier", value); }
    };
}
