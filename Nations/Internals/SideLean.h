#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class SideLean : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SideLean(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "SideLean") {}
    public:
        int bystander() const { return ReadField<int>("bystander"); }
        void SetBystander(int value) const { WriteField<int>("bystander", value); }
        float lean() const { return ReadField<float>("lean"); }
        void SetLean(float value) const { WriteField<float>("lean", value); }
        float aid() const { return ReadField<float>("aid"); }
        void SetAid(float value) const { WriteField<float>("aid", value); }
        int lastActTick() const { return ReadField<int>("lastActTick"); }
        void SetLastActTick(int value) const { WriteField<int>("lastActTick", value); }
        int stage() const { return ReadField<int>("stage"); }
        void SetStage(int value) const { WriteField<int>("stage", value); }
        bool cheered() const { return ReadField<bool>("cheered"); }
        void SetCheered(bool value) const { WriteField<bool>("cheered", value); }
        bool noted() const { return ReadField<bool>("noted"); }
        void SetNoted(bool value) const { WriteField<bool>("noted", value); }
    };
}
