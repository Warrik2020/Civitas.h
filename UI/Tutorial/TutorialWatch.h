#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Tutorial
{
    class TutorialWatch : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TutorialWatch(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Tutorial", "TutorialWatch") {}
    public:
        void Resolve() const { Call("Resolve", nullptr, 0); }
        void Mark() const { Call("Mark", nullptr, 0); }
        void* nations() const { return ReadField<void*>("nations"); }
        void nations(void* value) const { WriteField<void*>("nations", value); }
        void* internals() const { return ReadField<void*>("internals"); }
        void internals(void* value) const { WriteField<void*>("internals", value); }
        void* expansion() const { return ReadField<void*>("expansion"); }
        void expansion(void* value) const { WriteField<void*>("expansion", value); }
        void* quick() const { return ReadField<void*>("quick"); }
        void quick(void* value) const { WriteField<void*>("quick", value); }
        void* recruitment() const { return ReadField<void*>("recruitment"); }
        void recruitment(void* value) const { WriteField<void*>("recruitment", value); }
        void* army() const { return ReadField<void*>("army"); }
        void army(void* value) const { WriteField<void*>("army", value); }
        void* frontlines() const { return ReadField<void*>("frontlines"); }
        void frontlines(void* value) const { WriteField<void*>("frontlines", value); }
        void* overview() const { return ReadField<void*>("overview"); }
        void overview(void* value) const { WriteField<void*>("overview", value); }
        void* modes() const { return ReadField<void*>("modes"); }
        void modes(void* value) const { WriteField<void*>("modes", value); }
        void* cam() const { return ReadField<void*>("cam"); }
        void cam(void* value) const { WriteField<void*>("cam", value); }
    };
}
