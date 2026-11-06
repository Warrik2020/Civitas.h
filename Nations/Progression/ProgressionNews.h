#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class ProgressionNews : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ProgressionNews(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "ProgressionNews") {}
    public:
        void Raise(int nationId, int kind, const char* title, void* terms, int tile, bool good) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { &nationId, &kind, managed_2, terms, &tile, &good }; CallStatic("Raise", args, 6); }
    };
}
