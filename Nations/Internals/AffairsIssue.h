#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsIssue : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsIssue(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsIssue") {}
    public:
        void* ToString() const { return Call("ToString", nullptr, 0); }
        bool error() const { return ReadField<bool>("error"); }
        void error(bool value) const { WriteField<bool>("error", value); }
        void* file() const { return ReadField<void*>("file"); }
        void file(void* value) const { WriteField<void*>("file", value); }
        int line() const { return ReadField<int>("line"); }
        void line(int value) const { WriteField<int>("line", value); }
        void* message() const { return ReadField<void*>("message"); }
        void message(void* value) const { WriteField<void*>("message", value); }
    };
}
