#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationRelevance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationRelevance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationRelevance") {}
    public:
        void Rank(void* nations, void* internals, void* mil, void* dst, int max_ = 16) const { void* __callArgs[] = { nations, internals, mil, dst, &max_ }; CallStatic("Rank", __callArgs, 5); }
        void* Label(void* t) const { void* __callArgs[] = { t }; return CallStatic("Label", __callArgs, 1); }
    };
}
