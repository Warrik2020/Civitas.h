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
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* internals() const { return ReadField<void*>("internals"); }
        void SetInternals(void* value) const { WriteField<void*>("internals", value); }
        void* expansion() const { return ReadField<void*>("expansion"); }
        void SetExpansion(void* value) const { WriteField<void*>("expansion", value); }
        void* quick() const { return ReadField<void*>("quick"); }
        void SetQuick(void* value) const { WriteField<void*>("quick", value); }
        void* recruitment() const { return ReadField<void*>("recruitment"); }
        void SetRecruitment(void* value) const { WriteField<void*>("recruitment", value); }
        void* army() const { return ReadField<void*>("army"); }
        void SetArmy(void* value) const { WriteField<void*>("army", value); }
        void* frontlines() const { return ReadField<void*>("frontlines"); }
        void SetFrontlines(void* value) const { WriteField<void*>("frontlines", value); }
        void* overview() const { return ReadField<void*>("overview"); }
        void SetOverview(void* value) const { WriteField<void*>("overview", value); }
        void* modes() const { return ReadField<void*>("modes"); }
        void SetModes(void* value) const { WriteField<void*>("modes", value); }
        void* cam() const { return ReadField<void*>("cam"); }
        void SetCam(void* value) const { WriteField<void*>("cam", value); }
    };
}
