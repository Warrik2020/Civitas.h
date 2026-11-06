#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class Establishment : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Establishment(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "Establishment") {}
    public:
        float men() const { return ReadField<float>("men"); }
        void SetMen(float value) const { WriteField<float>("men", value); }
        float strengthPerMember() const { return ReadField<float>("strengthPerMember"); }
        void SetStrengthPerMember(float value) const { WriteField<float>("strengthPerMember", value); }
        float tankShare() const { return ReadField<float>("tankShare"); }
        void SetTankShare(float value) const { WriteField<float>("tankShare", value); }
        float gunShare() const { return ReadField<float>("gunShare"); }
        void SetGunShare(float value) const { WriteField<float>("gunShare", value); }
        float cavShare() const { return ReadField<float>("cavShare"); }
        void SetCavShare(float value) const { WriteField<float>("cavShare", value); }
        float carried() const { return ReadField<float>("carried"); }
        void SetCarried(float value) const { WriteField<float>("carried", value); }
        float paceMul() const { return ReadField<float>("paceMul"); }
        void SetPaceMul(float value) const { WriteField<float>("paceMul", value); }
        float aoiMul() const { return ReadField<float>("aoiMul"); }
        void SetAoiMul(float value) const { WriteField<float>("aoiMul", value); }
        int soldiers() const { return ReadField<int>("soldiers"); }
        void SetSoldiers(int value) const { WriteField<int>("soldiers", value); }
        int cavalry() const { return ReadField<int>("cavalry"); }
        void SetCavalry(int value) const { WriteField<int>("cavalry", value); }
        int tanks() const { return ReadField<int>("tanks"); }
        void SetTanks(int value) const { WriteField<int>("tanks", value); }
        int guns() const { return ReadField<int>("guns"); }
        void SetGuns(int value) const { WriteField<int>("guns", value); }
        int cars() const { return ReadField<int>("cars"); }
        void SetCars(int value) const { WriteField<int>("cars", value); }
        int tankCrew() const { return ReadField<int>("tankCrew"); }
        void SetTankCrew(int value) const { WriteField<int>("tankCrew", value); }
        int gunCrew() const { return ReadField<int>("gunCrew"); }
        void SetGunCrew(int value) const { WriteField<int>("gunCrew", value); }
    };
}
