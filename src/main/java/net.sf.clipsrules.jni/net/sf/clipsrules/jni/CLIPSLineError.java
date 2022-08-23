package net.sf.clipsrules.jni;

/**
 * @author G.D. Riley
 *
 */
public class CLIPSLineError {
    private String fileName;
    private long lineNumber;
    private String message;

    /**
     * @param theFileName
     * @param theLineNumber
     * @param theMessage
     */
    public CLIPSLineError(String theFileName, long theLineNumber, String theMessage) {
        fileName = theFileName;
        lineNumber = theLineNumber;
        message = theMessage;
    }

    /**
     * @return
     */
    public String getFileName() {
        return fileName;
    }

    /**
     * @return
     */
    public long getLineNumber() {
        return lineNumber;
    }

    /**
     * @return
     */
    public String getMessage() {
        return message;
    }
}