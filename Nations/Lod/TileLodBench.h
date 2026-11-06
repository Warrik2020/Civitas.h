#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class TileLodBench : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileLodBench(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "TileLodBench") {}
    public:
        void Begin() const { CallStatic("Begin", nullptr, 0); }
    };
}
