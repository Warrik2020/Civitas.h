#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class Rearm : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Rearm(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "Rearm") {}
    public:
        void Tick(void* mil, void* it, void* cfg, int tick) const { void* args[] = { mil, it, cfg, &tick }; CallStatic("Tick", args, 4); }
        int LastPassSwitched() const { return ReadStaticField<int>("LastPassSwitched"); }
        void SetLastPassSwitched(int value) const { WriteStaticField<int>("LastPassSwitched", value); }
        void* d() const { return ReadField<void*>("d"); }
        void SetD(void* value) const { WriteField<void*>("d", value); }
        float gap() const { return ReadField<float>("gap"); }
        void SetGap(float value) const { WriteField<float>("gap", value); }
        bool outOfDate() const { return ReadField<bool>("outOfDate"); }
        void SetOutOfDate(bool value) const { WriteField<bool>("outOfDate", value); }
    };
}
