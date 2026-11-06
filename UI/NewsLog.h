#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NewsLog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NewsLog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NewsLog") {}
    public:
        void* Newest(int i) const { void* args[] = { &i }; return Call("Newest", args, 1); }
        bool SetFlavor(int entryId, const char* flavor) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(flavor ? flavor : "") : nullptr; void* args[] = { &entryId, managed_1 }; return CallValue<bool>("SetFlavor", args, 2); }
    };
}
