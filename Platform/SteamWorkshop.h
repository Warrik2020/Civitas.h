#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class SteamWorkshop : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SteamWorkshop(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "SteamWorkshop") {}
    public:
        void OpenItemPage(uint64_t fileId) const { void* args[] = { &fileId }; CallStatic("OpenItemPage", args, 1); }
        void OpenLegalAgreement() const { CallStatic("OpenLegalAgreement", nullptr, 0); }
        void Publish(void* req, void* done) const { void* args[] = { req, done }; CallStatic("Publish", args, 2); }
        void Poll() const { CallStatic("Poll", nullptr, 0); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* description() const { return ReadField<void*>("description"); }
        void SetDescription(void* value) const { WriteField<void*>("description", value); }
        void* contentFolder() const { return ReadField<void*>("contentFolder"); }
        void SetContentFolder(void* value) const { WriteField<void*>("contentFolder", value); }
        void* previewFile() const { return ReadField<void*>("previewFile"); }
        void SetPreviewFile(void* value) const { WriteField<void*>("previewFile", value); }
        void* changeNote() const { return ReadField<void*>("changeNote"); }
        void SetChangeNote(void* value) const { WriteField<void*>("changeNote", value); }
        void* metadata() const { return ReadField<void*>("metadata"); }
        void SetMetadata(void* value) const { WriteField<void*>("metadata", value); }
        void* tags() const { return ReadField<void*>("tags"); }
        void SetTags(void* value) const { WriteField<void*>("tags", value); }
        void* visibility() const { return ReadField<void*>("visibility"); }
        void SetVisibility(void* value) const { WriteField<void*>("visibility", value); }
        uint64_t existingFileId() const { return ReadField<uint64_t>("existingFileId"); }
        void SetExistingFileId(uint64_t value) const { WriteField<uint64_t>("existingFileId", value); }
        void* noun() const { return ReadField<void*>("noun"); }
        void SetNoun(void* value) const { WriteField<void*>("noun", value); }
    };
}
