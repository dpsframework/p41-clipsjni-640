package net.sf.clipsrules.jni;

/**
 * @author G.D.Riley
 *
 */
public class CaptureRouter extends BaseRouter {

    private String captureString = "";
    private boolean forwardOutput = false;

    /**
     * @param theEnv
     * @param theCaptureNames
     */
    public CaptureRouter(Environment theEnv, String[] theCaptureNames) {
        super(theEnv, theCaptureNames, 30);
    }

    /**
     * @param theEnv
     * @param theCaptureNames
     * @param shouldForwardOutput
     */
    public CaptureRouter(Environment theEnv, String[] theCaptureNames, boolean shouldForwardOutput) {
        super(theEnv, theCaptureNames, 30);
        forwardOutput = shouldForwardOutput;
    }

    /**
     * Set a zero long string to buffer of router.
     */
    public void clear() {
        captureString = "";
    }

    /**
     * @return The string that Route contains
     */
    public String getOutput() {
        return captureString;
    }

    /**
     *
     */
    @Override
    public void write(String logName, String printString) {
        captureString = captureString.concat(printString);
        if (forwardOutput) {
            clips.callNextPrintRouter(this, logName, printString);
        }
    }
}