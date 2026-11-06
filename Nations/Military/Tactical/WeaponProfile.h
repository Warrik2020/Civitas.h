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
        void* Melee(int era) const { void* args[] = { &era }; return CallStatic("Melee", args, 1); }
        int era() const { return ReadField<int>("era"); }
        void SetEra(int value) const { WriteField<int>("era", value); }
        int age() const { return ReadField<int>("age"); }
        void SetAge(int value) const { WriteField<int>("age", value); }
        float rangeTiles() const { return ReadField<float>("rangeTiles"); }
        void SetRangeTiles(float value) const { WriteField<float>("rangeTiles", value); }
        float reloadSeconds() const { return ReadField<float>("reloadSeconds"); }
        void SetReloadSeconds(float value) const { WriteField<float>("reloadSeconds", value); }
        float hitBase() const { return ReadField<float>("hitBase"); }
        void SetHitBase(float value) const { WriteField<float>("hitBase", value); }
        bool volleys() const { return ReadField<bool>("volleys"); }
        void SetVolleys(bool value) const { WriteField<bool>("volleys", value); }
        float meleeHit() const { return ReadField<float>("meleeHit"); }
        void SetMeleeHit(float value) const { WriteField<float>("meleeHit", value); }
        float meleeReach() const { return ReadField<float>("meleeReach"); }
        void SetMeleeReach(float value) const { WriteField<float>("meleeReach", value); }
        float armour() const { return ReadField<float>("armour"); }
        void SetArmour(float value) const { WriteField<float>("armour", value); }
        float armourMelee() const { return ReadField<float>("armourMelee"); }
        void SetArmourMelee(float value) const { WriteField<float>("armourMelee", value); }
        float speedMul() const { return ReadField<float>("speedMul"); }
        void SetSpeedMul(float value) const { WriteField<float>("speedMul", value); }
        int machineGuns() const { return ReadField<int>("machineGuns"); }
        void SetMachineGuns(int value) const { WriteField<int>("machineGuns", value); }
        float mgFireMul() const { return ReadField<float>("mgFireMul"); }
        void SetMgFireMul(float value) const { WriteField<float>("mgFireMul", value); }
        float tankHp() const { return ReadField<float>("tankHp"); }
        void SetTankHp(float value) const { WriteField<float>("tankHp", value); }
        float gunRangeTiles() const { return ReadField<float>("gunRangeTiles"); }
        void SetGunRangeTiles(float value) const { WriteField<float>("gunRangeTiles", value); }
        float gunReloadSeconds() const { return ReadField<float>("gunReloadSeconds"); }
        void SetGunReloadSeconds(float value) const { WriteField<float>("gunReloadSeconds", value); }
        float gunBlastTiles() const { return ReadField<float>("gunBlastTiles"); }
        void SetGunBlastTiles(float value) const { WriteField<float>("gunBlastTiles", value); }
        int gunMaxKills() const { return ReadField<int>("gunMaxKills"); }
        void SetGunMaxKills(int value) const { WriteField<int>("gunMaxKills", value); }
        bool canDigIn() const { return ReadField<bool>("canDigIn"); }
        void SetCanDigIn(bool value) const { WriteField<bool>("canDigIn", value); }
        bool canSquare() const { return ReadField<bool>("canSquare"); }
        void SetCanSquare(bool value) const { WriteField<bool>("canSquare", value); }
        float doctrineTier() const { return ReadField<float>("doctrineTier"); }
        void SetDoctrineTier(float value) const { WriteField<float>("doctrineTier", value); }
    };
}
