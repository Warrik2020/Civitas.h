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
        void men(float value) const { WriteField<float>("men", value); }
        float strengthPerMember() const { return ReadField<float>("strengthPerMember"); }
        void strengthPerMember(float value) const { WriteField<float>("strengthPerMember", value); }
        float tankShare() const { return ReadField<float>("tankShare"); }
        void tankShare(float value) const { WriteField<float>("tankShare", value); }
        float gunShare() const { return ReadField<float>("gunShare"); }
        void gunShare(float value) const { WriteField<float>("gunShare", value); }
        float cavShare() const { return ReadField<float>("cavShare"); }
        void cavShare(float value) const { WriteField<float>("cavShare", value); }
        float carried() const { return ReadField<float>("carried"); }
        void carried(float value) const { WriteField<float>("carried", value); }
        float paceMul() const { return ReadField<float>("paceMul"); }
        void paceMul(float value) const { WriteField<float>("paceMul", value); }
        float aoiMul() const { return ReadField<float>("aoiMul"); }
        void aoiMul(float value) const { WriteField<float>("aoiMul", value); }
        int soldiers() const { return ReadField<int>("soldiers"); }
        void soldiers(int value) const { WriteField<int>("soldiers", value); }
        int cavalry() const { return ReadField<int>("cavalry"); }
        void cavalry(int value) const { WriteField<int>("cavalry", value); }
        int tanks() const { return ReadField<int>("tanks"); }
        void tanks(int value) const { WriteField<int>("tanks", value); }
        int guns() const { return ReadField<int>("guns"); }
        void guns(int value) const { WriteField<int>("guns", value); }
        int cars() const { return ReadField<int>("cars"); }
        void cars(int value) const { WriteField<int>("cars", value); }
        int tankCrew() const { return ReadField<int>("tankCrew"); }
        void tankCrew(int value) const { WriteField<int>("tankCrew", value); }
        int gunCrew() const { return ReadField<int>("gunCrew"); }
        void gunCrew(int value) const { WriteField<int>("gunCrew", value); }
    };
}
