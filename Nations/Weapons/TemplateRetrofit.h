#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class TemplateRetrofit : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TemplateRetrofit(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "TemplateRetrofit") {}
    public:
        void Tick(void* mil, void* it, void* cfg, int tick) const { void* args[] = { mil, it, cfg, &tick }; CallStatic("Tick", args, 4); }
    };
}
