#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsNotice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsNotice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsNotice") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int threadId() const { return ReadField<int>("threadId"); }
        void SetThreadId(int value) const { WriteField<int>("threadId", value); }
        void* storyId() const { return ReadField<void*>("storyId"); }
        void SetStoryId(void* value) const { WriteField<void*>("storyId", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void SetStepId(void* value) const { WriteField<void*>("stepId", value); }
        int severity() const { return ReadField<int>("severity"); }
        void SetSeverity(int value) const { WriteField<int>("severity", value); }
        void* headline() const { return ReadField<void*>("headline"); }
        void SetHeadline(void* value) const { WriteField<void*>("headline", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        bool opening() const { return ReadField<bool>("opening"); }
        void SetOpening(bool value) const { WriteField<bool>("opening", value); }
        bool closing() const { return ReadField<bool>("closing"); }
        void SetClosing(bool value) const { WriteField<bool>("closing", value); }
        bool choice() const { return ReadField<bool>("choice"); }
        void SetChoice(bool value) const { WriteField<bool>("choice", value); }
    };
}
